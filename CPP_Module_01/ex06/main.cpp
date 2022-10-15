#include "Karen.hpp"

static int	level(char *argv)
{
	std::string arr[4] = {"debug", "info", "warning", "error"};
	
	for (int i = 0; i < 4; i++)
	{
		if (argv == arr[i])
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
    Karen	karen;
	int		lvl;

	if (argc == 2)
	{
		lvl = level(argv[1]);
		switch (lvl)
		{
			case 0:
				karen.complain("debug");
			case 1:
				karen.complain("info");
			case 2:
				karen.complain("warning");
			case 3:
				karen.complain("error");
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
    return (0);
}