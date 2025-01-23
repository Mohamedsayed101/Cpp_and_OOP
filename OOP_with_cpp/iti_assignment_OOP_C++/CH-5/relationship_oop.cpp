#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    ~Point() {}

    void set_x(int x) { this->x = x; }
    void set_y(int y) { this->y = y; }

    int get_x() { return x; }
    int get_y() { return y; }

    void printPoint() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

class Line {
    Point start, end;
public:
    Line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0)
        : start(x1, y1), end(x2, y2) {}
    Line(Point start, Point end) : start(start), end(end) {}
    ~Line() {}

    void DrawLine() {
        cout << "Drawing line from ";
        start.printPoint();
        cout << " to ";
        end.printPoint();
    }
};

class rect {
private:
    Point ul, lr;
public:
    rect(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) : ul(x1, y1), lr(x2, y2) {}
    void drawRect() {
        cout << "Drawing rectangle with upper left corner at (" << ul.get_x() << ", " << ul.get_y()
             << ") and lower right corner at (" << lr.get_x() << ", " << lr.get_y() << ")" << endl;
    }
};

class circle {
    Point center;
    double radius;

public:
    circle(int x = 0, int y = 0, double r = 0) : center(x, y), radius(r) {}
    void drawCircle() {
        cout << "Drawing circle at (" << center.get_x() << ", " << center.get_y()
             << ") with radius " << radius << endl;
    }
};

class picture {
    int cNum, rNum, lNum;
    circle* circles;
    Line* lines;
    rect* rects;

public:
    picture() : cNum(0), rNum(0), lNum(0), circles(NULL), lines(NULL), rects(NULL) {}

    void set_circle(int Cn, circle* c) {
        cNum = Cn;
        circles = c;
    }

    void set_line(int Ln, Line* l) {
        lNum = Ln;
        lines = l;
    }

    void set_rect(int Rn, rect* r) {
        rNum = Rn;
        rects = r;
    }

    void drawAll() {
        for (int i = 0; i < cNum; i++) {
            circles[i].drawCircle();
        }
        for (int i = 0; i < rNum; i++) {
            rects[i].drawRect();
        }
        for (int i = 0; i < lNum; i++) {
            lines[i].DrawLine();
        }
    }
};

int main() {
    picture mypic;

    // Correctly initialize arrays
    circle cArr[3] = {circle(50, 50, 50), circle(200, 100, 100), circle(420, 50, 30)};
    Line lArr[2] = {Line(30, 40, 170, 100), Line(200, 200, 300, 300)};
    rect rArr[2] = {rect(420, 50, 300, 300), rect(40, 500, 500, 400)};

    // Set the shapes in the picture
    mypic.set_line(2, lArr);
    mypic.set_rect(2, rArr);
    mypic.set_circle(3, cArr);

    // Draw all shapes
    mypic.drawAll();

    return 0;
}
