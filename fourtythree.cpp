#include <iostream>
using namespace std;
class a
{
public:
    int umar;
    void display()

    {
        cout << "age is :" << umar << endl;
    }
};
int main()
{
    a eject;//we have made an object 
    cout << "enter the age : " << endl;
    cin >> eject.umar;
    eject.display();
    return 0;
}
