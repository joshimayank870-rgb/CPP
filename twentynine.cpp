#include <iostream>
using namespace std;
int main()
{
    int a, c=1;
    cout << "enter the number\n";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {

        c= c *i;
       
        
    }
   cout<<"the factorial of " << a<<endl << "is\n" <<c<<endl;
    return 0;
}