#include <iostream>
int main(){
    int hp = 40;
    int *hpPtr = & hp;
    std::cout << "Hp:"<< hp << " *hpPtr:" << *hpPtr;
}