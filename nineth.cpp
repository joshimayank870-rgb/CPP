#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout << " enter the numebr a :";
    cin >> a;
    cout << "enter the numeber b :";
    cin >> b;
    cout << "enter the operation :";
    cin >> c;

    switch (c)
    {
    case '+':
        cout << a + b;
        break;
    case '*':
        cout << a * b;
        break;
    case '-':
        cout << a - b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "pussy";
        break;
    }
    return 0;
}
