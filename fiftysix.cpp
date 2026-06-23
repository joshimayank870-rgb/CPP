#include <iostream>
using namespace std;
class Complex
{
    friend class student;
    int a, b;

public:
    void Name(int n, int m)
    {
        a = n;
        b = m;
    }
};
class student

{
public:
    int getdata(Complex x, Complex y)
    {
        return x.a + y.a;
    }
    int setdata(Complex x, Complex y)
    {
        return x.b + y.b;
    }
};
int main()
{
    Complex c1, c2;
    c1.Name(3, 4);

    c2.Name(1, 2);
    student x1,x2;
    int rev = x1.getdata(c2, c1);
    cout << rev << "+";
    int revs = x2.setdata(c2, c1);
    cout << revs << "i";
    return 0;
}