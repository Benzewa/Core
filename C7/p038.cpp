// vid 23
// program that prints the first letter of each word

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>

std::string ReadStr();
void PrintFirstLetter(std::string Str);

int main()
{
    std::string Name;
    Name = ReadStr();
    std::cout << Name << "\n";
    PrintFirstLetter(Name);
}
std::string ReadStr()
{
    std::string Str = "PlaceHolder";
    std::cout << "Please write Your Name : ";
    getline(std::cin, Str);
    return (Str);
}
void PrintFirstLetter(std::string Str)
{
    bool FirstLetter = true;
    for (int i = 0; i < Str.length(); i++)
    {
        if (Str[i] == ' ')
            FirstLetter = true;
        if (Str[i] != ' ' && FirstLetter)
        {
            std::cout << Str[i] << "\n";
            FirstLetter = false;
        }
    }
}