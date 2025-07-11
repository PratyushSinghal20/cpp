#include <iostream>
using namespace std;

int main() {
    int num;

    
    cout << "Enter a positive integer: ";
    cin >> num;

    
    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        
        if (num % 5 == 0 && num % 3 == 0) {
            cout << num << " is divisible by both 5 and 3." << endl;
        } else {
            cout << num << " is not divisible by both 5 and 3." << endl;
        }
    }

    return 0;
}
