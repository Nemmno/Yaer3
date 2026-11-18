#include <iostream>
#include <vector>
#include <string>
using namespace std;

void e1() {
    vector<int> v = {4, 8, 15, 16, 23, 42};
    for(int element : v) {
        cout << element << " ";
    }
    cout << endl;
}

void e2() {
    vector<int> v = {4, 8, 15, 16, 23, 42};
    for(int& element : v) {
        element *= 2;
    }
    
    for(int element : v) {
        cout << element << " ";
    }
    cout << endl;
    
/*
Explanation: Without '&', the range-based for loop assigns a copy of each element 
to variable. if we change it value it would only change the temporary copy, leaving 
the original elements inside the vector unchanged.
*/
}

void e3() {
    vector<string> words = {"cat", "elephant", "dog", "giraffe"};
    string longest = "";
    
    for(const string& word : words) {
        if(word.length() > longest.length()) {
            longest = word;
        }
    }
    
    cout << longest << endl;
}

int main() {
    cout << "--- E1 ---" << endl;
    e1();
    cout << "--- E2 ---" << endl;
    e2();
    cout << "--- E3 ---" << endl;
    e3();
    return 0;
}