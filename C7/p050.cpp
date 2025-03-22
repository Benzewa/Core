// vid 29
// program that Reads a string
// and counts the number of capital and small letters

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

enum enType
{
    Small = 0,
    Capital = 1
};

void ReadString(std::string &Str);
int StrLength(std::string Str);
int CountLetter(std::string Str, enType Type);

int main()
{
    std::string Str = "Moutaz Sami Shaban";
    // ReadString(Str);
    std::cout << Str << "\n";
    std::cout << "String Length : " << StrLength(Str) << "\n";
    std::cout << "Small Letters Count : " << CountLetter(Str, enType::Small) << "\n";
    std::cout << "Capital Letters Count : " << CountLetter(Str, enType::Capital) << "\n";
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
int CountLetter(std::string Str, enType Type)
{
    int Counter = 0;
    for (int i = 0; i < Str.length(); i++)
    {
        if (isupper(Str[i]) && Type == enType::Capital)
            Counter++;
        else if (islower(Str[i]) && Type == enType::Small)
            Counter++;
    }
    return (Counter);
}