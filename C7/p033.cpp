// vid 22
// program that prints the fibonacci sequence with recursion

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void RecFibonacci(int Number, int Prev1, int Prev2);

int main()
{
    RecFibonacci(10, 0, 1);
}
void RecFibonacci(int Number, int Prev1, int Prev2)
{
    int FibNumber = 0;
    if (Number > 0)
    {
        FibNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FibNumber;
        std::cout << FibNumber << " ";
    }
    RecFibonacci(Number - 1, Prev1, Prev2);
}