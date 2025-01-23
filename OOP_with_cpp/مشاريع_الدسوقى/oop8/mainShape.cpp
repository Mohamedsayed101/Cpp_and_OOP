#include<iostream>
#include "shape.h"
using namespace std;
int main()
{
    Shape* shap_ptr;
    rectangle r1(5,6,"Red");
    Circle c1(2,"Bule");
    shap_ptr=&r1;
    shap_ptr ->area();
    shap_ptr ->draw();
    shap_ptr = &c1;
    shap_ptr->area();
    shap_ptr->draw();
    return 0;
}