#include <iostream>
using namespace std;

int power(int a, int b)
{
  if (b == 0)
  {
    return 1;
  }
  else
  {
    return a * power(a, b - 1);
  }
}

int main()
{
  int a, b;
  cout << "Enter base (a): ";
  cin >> a;
  cout << "Enter exponent (b): ";
  cin >> b;

  int result = power(a, b);
  cout << a << "^" << b << " = " << result << endl;

  return 0;
}
