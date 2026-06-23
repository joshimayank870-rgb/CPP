#include <iostream>
using namespace std;
class emp
{
public:
    int a;
    void getdata()
    {
        cout << "enter your data" << endl;
        cin >> a;
    }
    void setdata()
    {
        cout << "your data is" << a << endl;
    }
};
int main()
{
    emp obj[4];
    for (int i = 0; i < 4; i++)
    {
        obj[i].getdata();
        obj[i].setdata();
    }
    return 0;
}