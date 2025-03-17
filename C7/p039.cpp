// vid 24
// program that Reads a string then uppercase the first letter

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

std::string ReadStr();

int main()
{
    std::string Name = ReadStr();
}
std::string ReadStr()
{
    std::string Str;
    std::cout << "Please Enter A String\n";
    getline(std::cin, Str);
    return (Str);
}
