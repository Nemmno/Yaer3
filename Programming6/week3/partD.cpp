#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int score = 0;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }
    int getScore() { return score; }
    
    bool setScore(int s) {
        if (s >= 0 && s <= 100) {
            score = s;
            return true;
        }
        return false;
    }
};

void d1() {
    Student s;
    s.setName("Ann");
    cout << s.setScore(85) << " " << s.setScore(150) << " " << s.setScore(-5) << "\n";
    cout << s.getName() << " " << s.getScore() << "\n";
}

class BankAccount {
private:
    double balance = 0;
    int transactions = 0;
public:
    bool deposit(double amount) {
        if (amount <= 0) return false;
        balance += amount;
        transactions++;
        return true;
    }
    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        transactions++;
        return true;
    }
    double getBalance() { return balance; }
    int getTransactions() { return transactions; }
};

void d2() {
    BankAccount b;
    cout << b.deposit(1000) << " " << b.withdraw(300) << " " << b.withdraw(5000) << " " << b.deposit(-50) << "\n";
    cout << b.getBalance() << " " << b.getTransactions() << "\n";
}

/* Explanation for D3: There is no fahrenheit data member because it can be dynamically 
calculated from celsius. Storing both could lead to inconsistent data if one is updated 
but the other is not.*/

class Thermometer {
private:
    double celsius = 25.0;
public:
    bool setCelsius(double c) {
        if (c < -273.15) return false;
        celsius = c;
        return true;
    }
    double getCelsius() { return celsius; }
    double getFahrenheit() { return celsius * 9.0 / 5.0 + 32.0; }
    double getKelvin() { return celsius + 273.15; }
};

void printT(Thermometer& t) {
    cout << t.getCelsius() << " " << t.getFahrenheit() << " " << t.getKelvin() << "\n";
}

void d3() {
    Thermometer t;
    printT(t);
    cout << t.setCelsius(-300) << "\n";
    printT(t);
    t.setCelsius(100);
    printT(t);
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