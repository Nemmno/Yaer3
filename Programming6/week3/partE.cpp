#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class StudentRecord {
private:
    string id;
    string name;
    double assignment = 0;
    double midterm = 0;
    double finalExam = 0;
public:
    void setId(string i) { id = i; }
    void setName(string n) { name = n; }
    string getId() { return id; }
    string getName() { return name; }
    
    bool setScores(double a, double m, double f) {
        if (a >= 0 && a <= 100 && m >= 0 && m <= 100 && f >= 0 && f <= 100) {
            assignment = a;
            midterm = m;
            finalExam = f;
            return true;
        }
        return false;
    }
    
    double total() {
        return (assignment * 0.3) + (midterm * 0.3) + (finalExam * 0.4);
    }
    
    string grade() {
        double t = total();
        if (t >= 80) return "A";
        if (t >= 75) return "B+";
        if (t >= 70) return "B";
        if (t >= 65) return "C+";
        if (t >= 60) return "C";
        if (t >= 55) return "D+";
        if (t >= 50) return "D";
        return "F";
    }
    
    bool passed() {
        return grade() != "F";
    }
};

void e1() {
    StudentRecord s;
    s.setId("66010001");
    s.setName("Ann");
    
    cout << s.setScores(85, 78, 90) << "\n";
    cout << s.getId() << " " << s.getName() << " " << s.total() << " " << s.grade() << "\n";
    
    cout << s.setScores(120, 50, 50) << "\n";
    cout << s.total() << " " << s.grade() << "\n";
}

StudentRecord makeRecord(string id, string name, double a, double m, double f) {
    StudentRecord s;
    s.setId(id);
    s.setName(name);
    s.setScores(a, m, f);
    return s;
}

void printReport(vector<StudentRecord>& list) {
    for (StudentRecord& s : list) {
        cout << s.getId() << " " << s.getName() << " " << s.total() << " " << s.grade() << "\n";
    }
}

void e2() {
    vector<StudentRecord> list;
    list.push_back(makeRecord("66010001", "Ann", 85, 78, 90));
    list.push_back(makeRecord("66010002", "Ben", 78, 75, 76));
    list.push_back(makeRecord("66010003", "Chai", 55, 40, 48));
    list.push_back(makeRecord("66010004", "Dao", 90, 88, 95));
    list.push_back(makeRecord("66010005", "Eak", 55, 52, 57));
    
    printReport(list);
}

int main() {
    cout << fixed << setprecision(1);
    cout << "--- E1 ---" << endl;
    e1();
    cout << "--- E2 ---" << endl;
    e2();
    return 0;
}