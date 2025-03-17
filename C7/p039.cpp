// vid 24
// program that Reads a string then uppercase the first letter

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

std::string ReadStr();
std::string UpperCaseFirstLetter(std::string Name);

int main()
{
    std::string Name = ReadStr();
    std::cout << Name;
    std::cout << "\n";
    std::cout << UpperCaseFirstLetter(Name);
}
std::string ReadStr()
{
    std::string Str;
    std::cout << "Please Enter A String\n";
    getline(std::cin, Str);
    return (Str);
}
std::string UpperCaseFirstLetter(std::string Name)
{
    bool isFirst = true;
    for (int i = 0; i < Name.length(); i++)
    {
        if (isFirst)
        {
            Name[i] = toupper(Name[i]);
            isFirst = false;
        }
        if (Name[i] == ' ')
        {
            Name[i + 1] = toupper(Name[i + 1]);
            isFirst = false;
        }
    }
    return (Name);
}
