#include <iostream>
using namespace std;
int num(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return num(a - 1) + num(a - 2);
    }
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER \n";
    cin >> n;
    cout << "THE FABONACCI NUMBER OF " << n << endl
         << "IS" << num(n) << endl;
    return 0;
}