#include "iostream"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Printing the Addresses of strings\n";
	std::cout << "The string:\t" << &str << std::endl;
	std::cout << "string ptr:\t" << stringPTR << std::endl;
	std::cout << "string ref:\t" << &stringREF << std::endl;

	std::cout << "\nPrinting the Content of strings\n";
	std::cout << "The string:\t" << str << std::endl;
	std::cout << "string ptr:\t" << *stringPTR << std::endl;
	std::cout << "string ref:\t" << stringREF << std::endl;
	return (0);
}