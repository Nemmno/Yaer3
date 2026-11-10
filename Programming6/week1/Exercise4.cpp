#include <iostream>
int Accumulate_Score(int bonus=50){
    int score,total = 0;
    while (score != 0)
        {
            std::cout << "enter mission score:";
            std::cin >> score;
            total += score;
        }
    total += bonus;
    std::cout << "total score is " << total << std::endl;
    return total;
}
int main(){

    Accumulate_Score();
    Accumulate_Score(100);

}