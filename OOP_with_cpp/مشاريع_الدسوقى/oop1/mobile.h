#Pragma once
using namespace std;
class mobile
{
    private:
        string maker;
        int model;
        string color;
        float max_speed;
    public:
        void set_maker(string mk)
        string get_maker() 
        void set_model(int md) { model = md; }
        int get_model() { return model; }
        void set_color(string cl) { color = cl; }
        string get_color() { return color; }
        void set_max_speed(float sp) { max_speed = sp; }
        float get_max_speed() { return max_speed; }
        void display_info()    
}