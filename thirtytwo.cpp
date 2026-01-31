#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "ENTER THE FIRST NUM\n";
    cin >> a;
    cout << "ENTER THE SECOND NUM\n";
    cin >> b;
    cout << "ENTER THE THIRD NUM\n";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A IS LARGEST\n"
                 << a;
        }
        else
        {
            cout << "C IS LARGEST\n"
                 << c;
        }
        if (b > c)
        {
            if(b>a)
            cout << "B IS LARGEST\n"
                 << b;
        }
        else
        {
            cout << "C IS LARGEST\n"
                 << c;
        }
        return 0;
    }
}