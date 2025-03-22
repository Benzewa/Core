// vid 29
// program that Reads a string
// and counts the number of capital and small letters

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

void ReadString(std::string &Str);
int StrLength(std::string Str);
int CountSmall(std::string Str);
int CountCapital(std::string Str);

int main()
{
    std::string Str = "Moutaz Sami Shaban";
    // ReadString(Str);
    std::cout << Str << "\n";
    std::cout << "String Length : " << StrLength(Str) << "\n";
    std::cout << "Small Letters Count : " << CountSmall(Str) << "\n";
    std::cout << "Capital Letters Count : " << CountCapital(Str) << "\n";
}
void ReadString(std::string &Str)
{
    std::cout << "Please Enter String : ";
    getline(std::cin, Str);
}
int StrLength(std::string Str)
{
    int Counter = 0;
    for (int i = 0; i < Str.length(); i++)
        Counter++;
    return (Counter);
}
int CountCapital(std::string Str)
{
    int Counter = 0;
    for (int i = 0; i < Str.length(); i++)
    {
        if (isupper(Str[i]))
            Counter++;
    }
    return (Counter);
}
int CountSmall(std::string Str)
{
    int Counter = 0;
    for (int i = 0; i < Str.length(); i++)
    {
        if (islower(Str[i]))
            Counter++;
    }
    return (Counter);
}