// vid 26
// program that Reads a string then uppercases and lowercases all Letters

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

std::string ReadStr(std::string Str);
std::string UpperCase(std::string Str);
std::string LowerCase(std::string Str);

int main()
{
    std::string Str;
    Str = ReadStr(Str);
    std::string UpperCasedStr;
    std::string LowerCasedStr;

    std::cout << Str << "\n";
    UpperCasedStr = UpperCase(Str);
    std::cout << UpperCasedStr << "\n";
    LowerCasedStr = LowerCase(Str);
    std::cout << LowerCasedStr << "\n";
}
std::string ReadStr(std::string Str)
{
    std::cout << "Enter String:\n";
    getline(std::cin, Str);
    return (Str);
}
std::string UpperCase(std::string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = toupper(Str[i]);
    }
    return (Str);
}
std::string LowerCase(std::string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }
    return (Str);
}