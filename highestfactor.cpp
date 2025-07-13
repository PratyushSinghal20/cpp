#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = n - 1; i >= 1; i--)
  {
    if (n % i == 0)
    {
      cout << "The highest factor of " << n << " (excluding itself) is: " << i << endl;
      break;
    }
  }

  return 0;
}
