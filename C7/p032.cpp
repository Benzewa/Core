// vid 21
// program that prints the fibonacci sequence

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
    std::cout << "1 ";
    int Fibonacci = 0;
    int FPrev = 0;
    int SPrev = 1;
    for (int i = 2; i <= Number; i++)
    {
        Fibonacci = FPrev + SPrev;
        std::cout << Fibonacci << " ";
        FPrev = SPrev;
        SPrev = Fibonacci;
    }
}