#include <iostream>
using namespace std;
int main()
{
    enum meal
    {
        lunch,
        dinner,
        breakfast
    };

    cout << "the value of lunch is" << lunch << endl;
    cout << "the value of dinner is " << dinner << endl;
    cout << "the value of breakafast is " << breakfast << endl;
    return 0;
}