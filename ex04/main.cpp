#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of arguments\n";
		return (0);
	}
	std::string line;
	std::string outfile;
	std::string sub = argv[2];
	outfile.append(argv[1]);
	outfile.append(".replace");
	std::ifstream fin(argv[1]);
	if (fin == 0)
	{
		std::cout << "The file " << argv[1] << " does not exist\n";
		return (0);
	}
	char *char_arr = &outfile[0];
	std::ofstream fout(char_arr);
	std::getline(fin, line);
	while (1)
	{
		for (int pos = 0; argv[2][0] &&line.find(argv[2], pos) < line.length(); ++pos)
		{
			pos = line.find(argv[2], pos);
			line = line.substr(0, pos) + argv[3] + line.substr(pos + sub.length(), -1);
			pos = (line.substr(0, pos) + argv[3]).length();
		}
		fout << line;
		if (line.find("//n", 0) < line.length())
			fout << "\n";
		// for(int i = 0 ; line[i] ; ++i)
		// 	std::cout << line[i] << " ";
		// std::cout << std::endl;
		if (std::getline(fin, line))
		{
			if (fin.eof() != 1)
				fout << "\n";
		}
		else
			break;
	}
	fin.close();
	fout.close();
	return (0);
}