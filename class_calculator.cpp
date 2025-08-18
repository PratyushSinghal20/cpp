#include <iostream>
using namespace std;

class Calc {
public:
    double a, b;
    char op;

    void calculator() {
        cout << "Enter first number:"; 
        cin >> a ;

        cout << "enter operator:" ;
        cin >> op;

        cout << "enter second number:" ;
        cin >> b;




        switch (op) {
            case '+':
                cout << "Sum = " << (a + b) << endl;
                break;
            case '-':
                cout << "Difference = " << (a - b) << endl;
                break;
            case '*':
                cout << "Product = " << (a * b) << endl;
                break;
            case '/':
                if (b != 0)
                    cout << "Quotient = " << (a / b) << endl;
                else
                    cout << "Error: Division by zero not allowed." << endl;
                break;
            default:
                cout << "enter a valid operator" << endl;
                break;
        }
    }
};

int main() {
    Calc c1;
    char choice;

    do {
        c1.calculator();
        cout << "Do another (Y/N)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}