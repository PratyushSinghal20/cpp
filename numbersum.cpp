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
    int sum = 0;
    while (num > 0)
    {
      digit = num % 10;
      sum = sum + digit;
      num /= 10;
    }
    cout << "The sum of the digits is: " << sum << endl;
  }
}