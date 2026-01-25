#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int marks[] = {50, 30, 54, 90};
    while (i < 4)
    {
        cout << "the value of number are\n"
             << i << marks[i] << endl;
        i++;
    }
    return 0;
}