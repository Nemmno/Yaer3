#include <iostream>

using namespace std;

// partC.cpp:8:13: error: 'int PointC::x' is private within this context
// Difference: In C++, struct members are public by default, whereas class members are private by default.

struct PointS { int x = 0; int y = 0; };

class PointC { 
public: 
    int x = 0; int y = 0; 
};

void c1() {
    PointS a;
    a.x = 1;
    a.y = 2;
    
    PointC b;
    b.x = 3; 
    b.y = 4;
    
    cout << a.x << " " << a.y << endl;
    cout << b.x << " " << b.y << endl;
}

class Lamp {
private:
    bool on = false;
    int switchCount = 0;
public:
    void turnOn() { 
        if (!on) {
            on = true;
            switchCount++;
        }
    }
    void turnOff() { 
        if (on) {
            on = false;
            switchCount++;
        }
    }
    bool isOn() { return on; }
    
    void toggle() {
        if (on) {
            turnOff();
        } else {
            turnOn();
        }
    }
    
    int getSwitchCount() { return switchCount; }
};

void c2() {
    Lamp l;
    l.turnOn();
    cout << l.isOn() << endl;
    l.turnOff();
    cout << l.isOn() << endl;
}

void show(Lamp& l) {
    cout << l.isOn() << " " << l.getSwitchCount() << endl;
}

void c3() {
    Lamp l;
    l.turnOn();
    show(l);
    l.toggle();
    show(l);
    l.toggle();
    show(l);
}

int main() {
    cout << "--- C1 ---" << endl;
    c1();
    cout << "--- C2 ---" << endl;
    c2();
    cout << "--- C3 ---" << endl;
    c3();
    return 0;
}