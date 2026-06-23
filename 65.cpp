#include <iostream>
using namespace std;
class qork
{

public:
    int x, a, b;
    void data();
    void setdata1();
    void setdata2();
    void func();
};
void qork ::data()
{
    cout << "enter the datas" << endl;
}
void qork ::setdata1()
{

    cout << "data 1" << endl;
    cin >> x;
}
void qork::setdata2()
{
    cout << "data 2" << endl;
    cin >> a;
}
void qork::func()
{
    cout << "data 3" << endl;
    cin >> b;
}

class work : public qork
{
public:
    void off()
    {
        cout << "the data of 1 is " << x << endl
             << "data of 2 is" << a << endl
             << "data of 3 is" << b << endl;
    }
};

int main()
{
    work x;

    x.data();
    x.setdata1();
    x.setdata2();
    x.setdata2();
    x.func();
    x.off();

    return 0;
}