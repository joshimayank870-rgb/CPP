#include <iostream>
using namespace std;
int avg(int a, int b)
{
    int c = a / b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "enter the first number\n"
         << endl;
    cin >> num1;
    cout << "enter the second number\n"
         << endl;
    cin >> num2;
    cout << "the average of these two number are\n"
         << avg(num1, num2) << endl;
    return 0;
}