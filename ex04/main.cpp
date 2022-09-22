#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of arguments\n";
		return (0);
	}

	std::string str;
	std::string outfile;
	outfile.append(argv[1]);
	outfile.append(".replace");
	std::ifstream fin(argv[1]);
	// std::ofstream fout(outfile);
	fin >> str;
	while (1)
	{
		std::cout << str;
		if (fin >> str)
			std::cout << " ";
		else
			break;
	}
	std::cout << std::endl;
	fin.close();
	// fout.close();
	return (0);
}