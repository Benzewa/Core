#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Msg);
int Random(int From, int To);
void ReadArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int Max(int Arr[100], int ArrSize);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;

    ReadArr(Arr, ArrSize);
    PrintArr(Arr, ArrSize);
    cout << "\n" << "Max is : " << Max(Arr,ArrSize) << "\n";
}
int ReadNum(string Msg)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void ReadArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter ArrSize : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter ArrSize : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(10, 15);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
}
int Max(int Arr[100], int ArrSize)
{
    int Max = 0;
    for(int i = 0; i < ArrSize; i++)
    {
        if(Arr[i] > Max)
            Max = Arr[i];
    }
    return Max;
}
