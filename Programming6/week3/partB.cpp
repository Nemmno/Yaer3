#include <iostream>

using namespace std;

class Rectangle {
public:
    double width = 0;
    double height = 0;
    
    double area() { return width * height; }
    double perimeter() { return 2 * (width + height); }
    bool isSquare() { return width == height; }
};

void b1() {
    Rectangle r1;
    r1.width = 4;
    r1.height = 5;
    cout << r1.area() << " " << r1.perimeter() << " " << r1.isSquare() << "\n";

    Rectangle r2;
    r2.width = 3;
    r2.height = 3;
    cout << r2.area() << " " << r2.perimeter() << " " << r2.isSquare() << "\n";
}

class Counter {
public:
    int count = 0;
    
    void add() { count++; }
    void addMany(int n) {
        for (int i = 0; i < n; i++) {
            add();
        }
    }
    void reset() { count = 0; }
};

void b2() {
    Counter c1, c2;
    c1.add(); 
    c1.add();
    c1.addMany(5);
    c2.add();
    
    cout << c1.count << " " << c2.count << "\n";
    c1.reset();
    cout << c1.count << " " << c2.count << "\n";
}

const double PI = 3.14159;

class Circle {
public:
    double radius = 0;
    
    double area();
    double circumference();
    void scale(double factor);
};

double Circle::area() {
    return PI * radius * radius;
}

double Circle::circumference() {
    return 2 * PI * radius;
}

void Circle::scale(double factor) {
    radius *= factor;
}

void b3() {
    Circle c;
    c.radius = 3;
    cout << c.area() << " " << c.circumference() << "\n";
    
    c.scale(2);
    cout << c.radius << " " << c.area() << " " << c.circumference() << "\n";
}

int main() {
    cout << "--- B1 ---" << endl;
    b1();
    cout << "--- B2 ---" << endl;
    b2();
    cout << "--- B3 ---" << endl;
    b3();
    return 0;
}