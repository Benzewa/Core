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
    Capital = 1,
    All = 2
};

int CountLetters(std::string Str, enType Type);

int main()
{
    std::string Str = "MoutazSamiShaban";
    std::cout << "Small Letters Count : " << CountLetters(Str, Small) << " \n";
    std::cout << "Capital Letters Count : " << CountLetters(Str, Capital) << "\n";
    std::cout << "All Letters Count : " << CountLetters(Str, All) << "\n";
}
int CountLetters(std::string Str, enType Type)
{
    int Counter = 0;
    if (Type == enType::All)
        return (Str.length());
    for (int i = 0; i < Str.length(); i++)
    {
        if (isupper(Str[i]) && Type == enType::Capital)
            Counter++;
        else if (islower(Str[i]) && Type == enType::Small)
            Counter++;
    }
    return (Counter);
}