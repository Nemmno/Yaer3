#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages = 0;
    
    void print() {
        cout << title << " by " << author << " (" << pages << " pages)\n";
    }
};

void a1() {
    Book b1;
    b1.title = "Clean Code";
    b1.author = "Robert C. Martin";
    b1.pages = 464;
    b1.print();

    Book b2;
    b2.title = "C++ Primer";
    b2.author = "Lippman";
    b2.pages = 976;
    b2.print();
}

class Point {
public:
    int x = 0;
    int y = 0;
    void print() {
        cout << "(" << x << ", " << y << ")\n";
    }
};

void a2() {
    Point p;
    p.x = 3;
    p.y = 4;
    Point q = p;
    q.x = 10;
    // p.x did not change because q is a distinct copy of p. 
    // Modifying q only affects q, not the original object p.
    p.print();
    q.print();
}

class Student {
public:
    string name;
    int score = 0;
    
    void print() { 
        cout << name << " " << score << endl; 
    }
};

void a3() {
    Student s;
    s.name = "Ann";
    // Fix 1: Changed Student.name to s.name because variables must be accessed through an object instance, not the class name.
    // Fix 2 (in class Student): Added 'int score = 0;' to initialize it. Without initialization, it prints a garbage value.
    // Fix 3 (at top of file): Added '#include <string>' and 'using namespace std;' because they are required for 'string' and 'cout'.
    s.print();
}

int main() {
    cout << "--- A1 ---" << endl;
    a1();
    cout << "--- A2 ---" << endl;
    a2();
    cout << "--- A3 ---" << endl;
    a3();
    return 0;
}
