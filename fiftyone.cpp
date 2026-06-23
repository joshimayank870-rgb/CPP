#include <iostream>
using namespace std;
class binary
{
public:
    string a;
    void chkbinary();
    void getdata()
    {
        cout << "enter the string " << endl;
        cin >> a;
    }
    void oncecomp();
};
void binary ::chkbinary()
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '0' && a[i] != '1')
        {
            cout << "not binary" << endl;
        }
        else {
            cout<<"binary"<<endl;
        }
        
    }
    
}
void binary ::oncecomp()
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '0')
        {

            a[i] = '1';
        }

        else
        {
            a[i] = '0';
        }
    }
    cout << "the once compliment is " << a << endl;
}


int main()
{
    binary obj;
    obj.getdata();
    obj.chkbinary();
    obj.oncecomp();

    return 0;
}