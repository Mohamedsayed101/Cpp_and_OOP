#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setlenght(float l)
    {
        if(l>0)
        length=l;
        else
            cout<<"error ,please enter a positive number:";
    }
};

int main()
{

    return 0;
}
