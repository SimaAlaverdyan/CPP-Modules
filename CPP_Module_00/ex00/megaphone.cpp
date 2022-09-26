#include <iostream>
#include <string.h>

void    ft_to_upper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i])
        {
            ft_to_upper(argv[i]);
            std::cout << argv[i];
            i++;
        }
    }
    return 0;
}