#include <iostream>
using namespace std;
class neww
{
    int a;

public:
    neww(void) {};
    neww(int z)
    {
        a = z;
    }
    neww(neww &obj)
    {
        cout << "copy constructor is called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "this is the constructor" << a << endl;
    }
};
int main()
{
    neww j(3), k(7), l(8), m(9);
    j.display();
    k.display();
    l.display();
    neww d(m);
    d.display();
    return 0;
}