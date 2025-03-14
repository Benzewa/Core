// C6 vid 9
// Ternary Operator (Short Hand If)

#include <iostream>
#include <cstdlib> //random
#include <ctime> //random
using namespace std;

int Random(int From,int To);
void PosOrNeg(int Num);

int main()
{
    srand((unsigned)time(NULL));
    int Num = Random(-5,5);
    cout << Num << "\n";
    PosOrNeg(Num);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void PosOrNeg(int Num)
{
    (Num > 0) ? cout << "Positive\n" : (Num < 0) ? cout << "Negative\n" : cout << "Zero\n";

    // Mutiple Conditon Ternary
    // (Condition) ? cout/return : (Condition) ? cout/return;
}
