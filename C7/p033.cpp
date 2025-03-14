// vid 21
// program that prints the fibonacci sequence with recursion

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void Fibonacci(int Number);

int main()
{
    Fibonacci(10);
}
// 1 1 2 3 5 8 13
void Fibonacci(int Number)
{
    int Fibonacci = 0;
    int Prev2 = 0;
    int Prev1 = 1;

    std::cout << "1 ";
    for (int i = 2; i <= Number; i++)
    {
        Fibonacci = Prev2 + Prev1;
        if (i == Number)
            std::cout << Fibonacci;
        else
            std::cout << Fibonacci << " ";
        Prev2 = Prev1;
        Prev1 = Fibonacci;
    }
}