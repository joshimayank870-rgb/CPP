#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    n = n * fact(n - 1);
    return n;
}
int main()
{
    int a;
    cout << "ENTER THE NUMBER " << endl;
    cin >> a;
    cout << "FACTORIAL OF NUMBER " << a << endl
         << "IS" << fact(a) << endl;
    return 0;
}