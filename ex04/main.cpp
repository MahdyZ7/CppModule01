#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
	std::string		line;
	std::string		outfile;
	std::string		sub_out = argv[2];
	std::string		sub_in = argv[3];
	std::ifstream	fin;
	std::ofstream 	fout;
	char 			*char_arr;
	// check for correct no of args
	if (argc != 4)
	{
		std::cout << "wrong number of arguments\n";
		return (0);
	}
	// open the read file
	fin.open(argv[1]);
	if (fin == 0)
	{
		std::cout << "The file " << argv[1] << " does not exist\n";
		return (0);
	}
	// open the write file;
	outfile.append(argv[1]);
	outfile.append(".replace");
	char_arr = &outfile[0];
	fout.open(char_arr);
	if (fout == 0)
	{
		fin.close();
		std::cout << argv[1] << ": Permistion denied\n";
		return (0);
	}
	// loop to read and write
	while (getline(fin, line))
	{
		for (int pos = 0; sub_out[0] && line.find(sub_out, pos) < line.length();)
		{
			pos = line.find(argv[2], pos);
			line = line.substr(0, pos) + sub_in +
				line.substr(pos + sub_out.length(), -1);
			pos = (line.substr(0, pos) + sub_in).length();
		}
		fout << line;
		if (fin.eof() != 1)
			fout << "\n";
	}
	fin.close();
	fout.close();
	return (0);
}