// vid 26
// program that Reads a string then uppercases and lowercases all Letters

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

// std::string ReadStr();
std::string UpperCase(std::string Str);
void LowerCase(std::string &Str);

int main()
{
    std::string Name = "Moutaz Sami Shaban";
    std::cout << "Original String : " << Name << "\n";
    std::cout << "UprCased String : " << UpperCase(Name) << "\n";
    LowerCase(Name);
    std::cout << "LwrCased String : " << Name << "\n";
}
// std::string ReadStr()
// {
//     std::string String;
//     std::cout << "Enter A String : ";
//     getline(std::cin, String);
//     return (String);
// }
std::string UpperCase(std::string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = toupper(Str[i]);
    }
    return (Str);
}
void LowerCase(std::string &Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }
}