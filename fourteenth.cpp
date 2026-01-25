#include <iostream>
using namespace std;
int main()
{
    int a = 19;
    int *b = &a;
    cout << "the address of a is :\n"
         << &a;
    cout << "\nthe adress of a is :\n"
         << b;
    cout << "\nthe address of b is :\n " << &b;
    cout << "\nthe value of a is :\n"
         << *b;
    cout << "\nthe value of b is :\n"
         << a;
    return 0;
}