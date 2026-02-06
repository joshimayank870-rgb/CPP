#include <iostream>
using namespace std;
int main()
{
    char c, C, f, F, temp;
    int unit;
    cout << "ENTER THE OPERATION YOU WANT TEMPERATURE IN\n";
    cin >> temp;
    if (temp == 'c' || temp == 'C')
    {
        cout << "THE TEMPERATURE IN F IS\n";
        cin >> unit;
        cout << "THE TEMPERATURE IN CELSIUS IS\n";
        unit = (unit - 32) * 5 / 9;
        cout << unit << endl;
    }
    else if (temp == 'f' || temp == 'F')
    {
        cout << "THE TEMPERATURE IN C IS \n ";
        cin >> unit;
        cout << "THE TEMPERTAURE IN Fahrenheit IS\n";
        unit = (unit * 5 / 9) + 32;
        cout << unit << endl;
    }
    else
    {
        cout << "INVALID\n";
    }
    return 0;
}
