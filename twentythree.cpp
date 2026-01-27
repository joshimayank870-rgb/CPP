#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "GARMI LAG RAHI HAI? " << endl;
    cin >> a;
    if (a =='y')
    {
        cout << "today is a hot day " << endl;
    }
    else if (a =='n')
    {
        cout << "today is a moderate day " << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
    return 0;
}