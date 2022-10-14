#include <iostream>
#include <fstream>

std::string replace(std::ifstream &infile, std::string &str1, std::string &str2)
{
    std::string result;
    std::string line;
    std::size_t found;

    while (getline(infile, line))
    {
        found = line.find(str1);
        while (found != std::string::npos)
        {
            line.erase(found, str1.length());
            line.insert(found, str2);
            found = line.find(str1, found + 1);
        }
        result += line + "\n";
    }
    return (result);
}
int main(int argc, char **argv)
{
    std::ifstream infile;
    std::ofstream outfile;
    std::string file;
    std::string str1;
    std::string str2;
    std::string result;

    if (argc != 4)
    {
        std::cout << "there should be 3 arguments";
        return (1);        
    }
    file = argv[1];
    str1 = argv[2];
    str2 = argv[3];
    infile.open(file);
    if (!infile)
    {
        std::cout << "Can't open the file";
        return (1);
    }
    result = replace(infile, str1, str2);
    outfile.open(file + ".replace");
    outfile << result;
    infile.close();
    outfile.close();
    return (0);
}
