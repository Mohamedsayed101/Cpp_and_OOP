#include<iostream>
using namespace std;
#include "mobile.h"
mobile::set_maker(string mk):maker(mk){}
mobile::set_model(string md):model(md){}
mobile::set_price(double pr):price(pr){}
mobile::get_maker() const{return maker;}