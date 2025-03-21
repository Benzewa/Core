// vid 28
// program that Reads a string and converts all characters small convert to capital
// if its capital convert to small

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

void ReadString(std::string &Str);
void InvertStr(std::string &Str);

int main()
{
    std::string String;
    ReadString(String);
    std::cout << String << "\n";
    InvertStr(String);
    std::cout << String << "\n";
}
void ReadString(std::string &Str)
{
    std::cout << "Enter a String\n";
    getline(std::cin, Str);
}
void InvertStr(std::string &Str)
{
    for (int i = 0; i < Str.length(); i++)
        isupper(Str[i]) ? tolower(Str[i]) : toupper(Str[i]);
}