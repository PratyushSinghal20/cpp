#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a natural number: ";
  cin >> n;

  cout << "Squares of natural numbers up to " << n << " are:\n";
  for (int i = 1; i <= n; ++i)
  {
    cout << i * i << " ";
  }

  cout << endl;
  return 0;
}
