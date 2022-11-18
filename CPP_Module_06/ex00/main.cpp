#include <iostream>

bool	parsing(const std::string &str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Bad arguments" << std::endl;
	else if (parsing(argv[1]) == false)
		std::cout << "Invalid input" << std::endl;
	return (0);
}