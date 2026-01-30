#include <iostream>
using namespace std;
int meal(int a, int b); // prototype
int main()
{
    int num1, num2;
    cout << "the num1 is" << endl;
    cin >> num1;
    cout << "the num2 is" << endl;
    cin >> num2;
    cout << "the sum of these two numbers is\n"
         << meal(num1, num2) << endl;
    return 0;
}
int meal(int a, int b)
{
    int c = a + b;
    return c;
}