#include <iostream>
using namespace std;

int main() {
    int num;

    // Taking input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is positive
    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        // Check divisibility by 5
        if (num % 5 == 0) {
            cout << num << " is divisible by 5." << endl;
        } else {
            cout << num << " is not divisible by 5." << endl;
        }
    }

    return 0;
}
