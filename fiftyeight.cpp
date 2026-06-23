#include <iostream>
using namespace std;
class Y;
class X
{
    friend void swap(X &, Y &);
    int a;

public:
    void getdata(int n)
    {
        a = n;
    }
    void display()
    {
        cout << a;
    }
};
class Y
{
    friend void swap(X &, Y &);
    int b;

public:
    void setdata(int m)
    {
        b = m;
    }
    void display1()
    {
        cout << b;
    }
};
void swap(X &o1, Y &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
    cout << o1.a << o2.b;
}
int main()
{
    X o3;
    Y o4;
    o3.getdata(9);
    o4.setdata(7); // we can call in main function as well as the the swap function!
    swap(o3, o4);
    o3.display();
    o4.display1();
    return 0;
}
