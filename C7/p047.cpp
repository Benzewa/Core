// vid 28
// program that Reads a string and converts all characters small convert to capital
// if its capital convert to small

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

char ReadChar();
char ConvertChar(char A);
std::string ConvertStr(std::string Str);

int main()
{
    std::string StringOne = "moutaz SAMI";
    std::string StringTwo = ConvertStr(StringOne);
    std::cout << "Str 1 : " << StringOne << "\n";
    std::cout << "Str 2 : " << StringTwo << "\n";
}
char ReadChar()
{
    char A;
    std::cout << "Please Enter Character : ";
    std::cin >> A;
    return (A);
}
char ConvertChar(char A)
{
    return (isupper(A) ? tolower(A) : toupper(A));
}
std::string ConvertStr(std::string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = ConvertChar(Str[i]);
    }
    return (Str);
}