#include <iostream>
#include <string>
using namespace std;

void c1(){
    string first = "Ada",last = "Lovelace";
    string combined = last +", ";
    combined += first;
    cout << combined << " " << combined.length() << endl;
    cout <<(first == last) << " " <<(first != last)<< " ";
    cout << (first < last) << " " << (first > last) << endl;
}
void c2(){
    string s = "programming six";
    cout << s[0]<< s.at(s.length()-1) << endl;

    size_t space_pos = s.find(" ");
    cout << s.substr(0, space_pos) << endl;
    cout << s.substr(space_pos + 1) << endl;
    
    if (s.find("xyz") == string::npos) {
        cout << "not found" << endl;
    }
}
void c3() {
    string s = "Programming 6";
    
    s.insert(0, "C++ ");
    cout << s << endl;
    
    s.push_back('!');
    cout << s << endl;
    
    size_t pos6 = s.find("6");
    if(pos6 != string::npos) s.replace(pos6, 1, "Six");
    cout << s << endl;
    
    size_t posBang = s.find("!");
    if(posBang != string::npos) s.erase(posBang, 1);
    cout << s << endl;
    
    cout << s.length() << " " << s.empty() << endl;
    
    s.clear();
    cout << s.empty() << endl;
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