#include "PhoneBook.hpp"
#include <iostream>

int is_valid(std::string data[5])
{
    int i = 0;
    int res = 0;

    if (data[0].length() > 1 && data[1].length() > 1 && data[2].length() > 1
        && data[3].length() > 5 && data[4].length() > 1)
    {
        while (data[3][i] != 0)
        {
            if (data[3][i] > '0' && data[3][i] < '9')
                res = 1;
            i++;
        }
    }
    else
        std::cout << "\033[0;31mEnter Valid Information\n\033[0m";
    return (res);
}

int main(void)
{
    PhoneBook   book;
    std::string data[5];
    std::string input;
    int         index;

    while (1)
    {
        std::cout << "\033[0;36m";
        std::cout << "Choose the command: (ADD | SEARCH | EXIT)" << std::endl;
        std::cout << "> ";
        std::getline(std::cin, input);
        std::cout << "\033[0m";
        if (input == "ADD")
        {
            std::cout << "\033[0;35mEnter Contact Information\033[0m" << std::endl;
            std::cout << "First Name: ";
            std::getline(std::cin, data[0]);
            std::cout << "Last Name: ";
            std::getline(std::cin, data[1]);
            std::cout << "Nickname: ";
            std::getline(std::cin, data[2]);
            std::cout << "Number: ";
            std::getline(std::cin, data[3]);
            std::cout << "Darkest Secret: ";
            std::getline(std::cin, data[4]);
            if (is_valid(data))
            {
                book.add_contact(data);
                std::cout << "\033[0;32mContact Added Successfully\033[0m" << std::endl;
            }
        }
        else if (input == "SEARCH")
        {
            book.display_phonebook();
            std::cout << "\nInput index: ";
            std::cin >> index;
            if (std::cin.fail() || index < 0 || index > book.get_size())
            {
                std::cout << "\033[0;36mInvalid index\n\033[0m";
                getline(std::cin, input);
                continue;
            }
            book.display_contact(index);
            std::getline(std::cin, input);
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << "\033[0;36mInvalid Command\033[0m" << std::endl;
    }
    return (0);
}
