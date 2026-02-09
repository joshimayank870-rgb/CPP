#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cout << "enter no" << endl;
    cin >> a;
    for (int n = 1; a >= n; n++)
    {
        sum = sum + n;
    }
    cout << sum;
    return 0;
}