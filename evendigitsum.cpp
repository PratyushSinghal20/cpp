#include <iostream>
using namespace std;

int main()
{
  int num;
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
      int digit = num % 10;

      if (digit % 2 == 0)
      {
        sum += digit;
      }

      num /= 10;
    }

    cout << "The sum of even digits is: " << sum << endl;
  }

  return 0;
}
