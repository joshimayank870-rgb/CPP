#include <iostream>
using namespace std;
class shop
{
public:
    int itemid[100];
    int itemprice[100];
    int counter = 0;
    void getid()
    {
        cout << "ENTER THE ITEM ID " << endl;
        cin >> itemid[counter];
        cout << "ENTER THE ITEM PRICE" << endl;
        cin >> itemprice[counter];

        cout << "THE ITEM ID IS " << itemid[counter] << "PRICE IS" << itemprice[counter] << endl;
        counter++;
    }
    
};
int main()
{
    shop a;
    a.getid();
    a.getid();
    a.getid();

    return 0;
}