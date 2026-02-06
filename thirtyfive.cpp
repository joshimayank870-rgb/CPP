#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1, num2;
    cout << "ENTER NUM 1" << endl;
    cin >> num1;
    cout << "ENTER NUM 2" << endl;
    cin >> num2;
    cout << swap(num1, num2) << endl
         << num1
         << num2 << endl;
    return 0;
}