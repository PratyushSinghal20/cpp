#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // 0 and 1 are not prime
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
    } else {
        bool isPrime = true;

        // Check for factors from 2 to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }

    return 0;
}
