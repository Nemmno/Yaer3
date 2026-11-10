#include <iostream>
#include <string.h>
int main() {
    std::string name;
    int age;
    bool isAdult;
    std::cout << "Enter visitor name and then age:";
    std::cin >> name;
    std::cin >> age;
    if (age >= 18) isAdult = true;
    else isAdult = false;
    std::cout<<"Visitor"<< name << "| Adult ticket:" << isAdult;
}