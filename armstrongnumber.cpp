#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, original, sum = 0, digits = 0;
    cout << "enter the number" << endl;
    cin >> num;
    original = num;
    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 0;
    }
    if (sum == original)
    {
        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not armstorng number" << endl;
    }

    return 0;
}
