#include <iostream>
using namespace std;
int num(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    cout << a << b << endl;
    return 0;
}
int main()
{
    int num1, num2;
    cout << "ENTER NUM 1" << endl;
    cin >> num1;
    cout << "ENTER NUM 2" << endl;
    cin >> num2;
    cout << num(num1, num2) << endl;
    return 0;
}