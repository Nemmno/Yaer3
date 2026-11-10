#include <iostream>
int main() {
    int score,total = 0;
    while (score != 0)
        {
            std::cout << "enter mission score:";
            std::cin >> score;
            total += score;
        }
    std::cout << "total score is " << total;
}