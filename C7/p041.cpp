// vid 25
// program that Reads a string then lowercase the first letter
// Pass by reference to show changes on the string
// if Passed by value it will not affect the original string

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

std::string ReadString();
void LowCaseString(std::string &Str);

int main()
{
    std::string Name = "";
    Name = ReadString();
    std::cout << Name << "\n";
    LowCaseString(Name);
    std::cout << Name << "\n";
}
std::string ReadString()
{
    std::string Str;
    std::cout << "Enter Name : \n";
    getline(std::cin, Str);
    return (Str);
}
void LowCaseString(std::string &Str)
{
    bool isFirst = true;
    for (int i = 0; i < Str.length(); i++)
    {
        if (isFirst || Str[i] != ' ')
            Str[i] = tolower(Str[i]);
        isFirst = (Str[i] == ' ' ? true : false);
    }
}