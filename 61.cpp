#include <iostream>
using namespace std;
class name
{
public:
    int a, b;
    name(int x, int y )
    {
        a = x;
        b = y;
    }
    name(int x)
    {
        a = x;
        b=0; 
    }

    void parameter()
    {
        cout << "the value of a and b are" << a <<"and"<< b << endl;
    }
};
int main()
{
    name c(1, 3);
    c.parameter();
    name c1(5);
    c1.parameter();
    return 0;
}
