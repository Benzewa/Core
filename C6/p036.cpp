//vid 33
// Call by value

#include <iostream>
void Function(int x);

int main()
{
    int x = 0; // 0
    std::cout <<"x value before function : "<< x << "\n";
    std::cout <<"x address : "<< &x << "\n";
    Function(x);
    std::cout <<"x value after function : "<< x << "\n"; // 1
    std::cout <<"x address : "<< &x; // this reveals the address
}
// bcs the function is calling the x by value it will not change the value in main
void Function(int x)
{
    std::cout << "address of the alias : " << &x <<"\n";
    x++;
}
