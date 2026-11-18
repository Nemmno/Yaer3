#include <iostream>
#include <vector>
using namespace std;

void d1() {
    vector<int> v;
    for(int i = 1; i <= 10; i++) {
        v.push_back(i);
    }
    cout << v.size() << " " << v.front() << " " 
         << v.back() << " " << v[4] << " " << v.at(9) << endl;
}

void printVector(const vector<int>& v) {
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "| size=" << v.size() << endl;
}

void d2() {
    vector<int> v = {5, 3, 8};
    
    v.push_back(9);
    printVector(v);
    
    v.insert(v.begin(), 1);
    printVector(v);
    
    v.erase(v.begin() + 2);
    printVector(v);
    
    v.pop_back();
    printVector(v);
    
    v.clear();
    cout << v.empty() << endl;
}

vector<int> removeNegatives(const vector<int>& v) {
    vector<int> result;
    for(size_t i = 0; i < v.size(); i++) {
        if(v[i] >= 0) {
            result.push_back(v[i]);
        }
    }
    return result;
}

void d3() {
    vector<int> v = {3, -1, 4, 5, 9, 2};
    vector<int> res = removeNegatives(v);
    
    int max = res[0];
    double sum = 0;
    
    for(size_t i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
        sum += res[i];
        if(res[i] > max) max = res[i];
    }
    cout << endl;
    cout << res.size() << " " << max << " " << (sum / res.size()) << endl;
}

int main() {
    cout << "--- D1 ---" << endl;
    d1();
    cout << "--- D2 ---" << endl;
    d2();
    cout << "--- D3 ---" << endl;
    d3();
    return 0;
}