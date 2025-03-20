// vid 27
// program that Reads a Character if its small convert to capital if its capital convert to small

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

char ReadChar();
char ConvertChar(char A);

int main()
{
    char ChOne = ReadChar();
    std::cout << ChOne << "\n";
    ChOne = ConvertChar(ChOne);
    std::cout << ChOne << "\n";
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
    return (A = ((int(A) >= 65 && int(A) <= 90) ? int(A) + 32 : int(A) - 32));
}