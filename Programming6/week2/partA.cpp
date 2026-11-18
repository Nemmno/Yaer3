#include <iostream>
using namespace std;
void a1(){
    int a = 5;
    int *ptr = &a;
    cout << "Value of a before modification: " << *ptr << endl;
    *ptr = 50;
    cout << "Value of a after modification: " << *ptr << endl;
}
void addTen(int& n) {
    n += 10;
}
void a2(){
    int x = 7;
    cout << "Value of x before addTen: " << x << endl;
    addTen(x);
    cout << "Value of x after addTen: " << x << endl;
}
void swapValues(int& a,int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapPtr(int*a,int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void a3(){
    int p=3,q=9;
    swapValues(p,q);
    cout << "After swapValues: p=" << p << ", q=" << q << endl;
    swapPtr(&p,&q);
    cout << "After swapPtr: p=" << p << ", q=" << q << endl;
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