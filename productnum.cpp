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
    int product = 1;

    if (num == 0)
    {
      product = 0;
    }
    else
    {
      while (num > 0)
      {
        int digit = num % 10;
        product *= digit;
        num /= 10;
      }
    }

    cout << "The product of the digits is: " << product << endl;
  }

  return 0;
}
