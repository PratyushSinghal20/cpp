#include <iostream>
using namespace std;

int main()
{
    int num, digit;
    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        int reverse = 0;

        while (num > 0)
        {
            reverse = reverse * 10 + digit;
            num /= 10;
        }

        cout << "The reversed number is: " << reverse << endl;
    }

    return 0;
}
