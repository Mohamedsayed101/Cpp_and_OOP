#include<iostream>
using namespace std;
class circle{
    public:
    circle(){ circleCount++; }
    static int circleCount;
    static int getCircleCount(){ return circleCount; }
};
int circle::circleCount = 0;
int main() {
circle c1, c2;
cout<<c1.getCircleCount()<<endl; // Output: 2

return 0;
}