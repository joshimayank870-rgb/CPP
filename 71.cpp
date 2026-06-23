#include <iostream>
#include <cstring>
using namespace std;
class BASE
{
protected:
    string title;
    float rate;

public:
    BASE(string t, float r)
    {
        title = t;
        rate = r;
    }
    virtual void display() = 0;
};
class video : public BASE
{
protected:
    float videolength;

public:
    video(string t, float r, float vl) : BASE(t, r)
    {
        videolength = vl;
    }
    void display()
    {

        cout << "THIS IS THE RATING OF VIDEO " << rate << endl;

        cout << "THIS IS THE TITLE OF VIDEO" << title << endl;
        cout << "THIS IS THE VIDEO LENGHT OF VIDEO" << videolength << endl;
    }
};
class text : public BASE
{
protected:
    float textlength;

public:
    text(float tl, string t, float r) : BASE(t, r)
    {
        textlength = tl;
    }
    void display()
    {

        cout << "THIS IS THE RATING OF THE TEXT" << rate << endl;
        cout << "THIS IS THE TITLE OF THE TEXT" << title << endl;
        cout << "THIS IS THE TEXTL LENGTH OF TEXT" << textlength << endl;
    }
};
int main()
{
    BASE *pointer;
    video s("name", 4.88, 32.3);
    pointer = &s;
    pointer->display();
    BASE *pointer1;
    text j(3.4, "name2", 5.33);
    pointer1 = &j;
    pointer1->display();

    return 0;
}