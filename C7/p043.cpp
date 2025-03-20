// vid 26
// program that Reads a string then uppercases and lowercases all Letters

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

void ReadStr(std::string &Str);
void UpperCase(std::string &Str);
void LowerCase(std::string &Str);

int main()
{
    std::string Str = "Moutaz";
    ReadStr(Str);
    std::cout << Str << "\n";
    UpperCase(Str);
    std::cout << Str << "\n";
    LowerCase(Str);
    std::cout << Str << "\n";
}
void ReadStr(std::string &Str)
{
    std::cout << "Enter String:\n";
    getline(std::cin, Str);
}
void UpperCase(std::string &Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = toupper(Str[i]);
    }
}
void LowerCase(std::string &Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }
}
