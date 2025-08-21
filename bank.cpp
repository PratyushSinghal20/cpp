#include <iostream>
#include <string>
using namespace std;

class Account {
    int acc_no;
    string name;
    float balance;

public:
   
    Account() {
        acc_no = 98899;
        name = "Unknown";
        balance = 0.0;
    }

   
    Account(int acc, string n, float bal) {
        acc_no = acc;
        name = n;
        balance = bal;
    }

    
    Account(const Account &obj) {
        acc_no = obj.acc_no;
        name = obj.name;
        balance = obj.balance;
    }

   
    void withdraw(float amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

   
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    
    void display() {
        cout << "Account No: " << acc_no << ", Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    
    Account a1;
    cout << "Default Constructor: ";
    a1.display();

    
    Account a2(12345, "Pratyush", 5000);
    cout << "Parameterized Constructor: ";
    a2.display();

    
    a2.deposit(2000);
    a2.withdraw(1500);

   
    Account a3(a2);
    cout << "Copy Constructor (copy of a2): ";
    a3.display();

    return 0;
}