#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n < 0)
  {
    cout << "Please enter a non-negative integer." << endl;
  }
  else
  {
    int count = 0;

    while (n > 0)
    {
      n = n / 10;
      count++;
    }

    cout << "The number of digits is: " << count << endl;
  }
}
