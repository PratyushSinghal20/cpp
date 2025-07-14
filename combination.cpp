#include <iostream>
using namespace std;

long long factorial(int n)
{
  long long fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

long long combination(int n, int r)
{
  if (r > n)
  {
    return 0;
  }
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
  int n, r;

  cout << "enter the value of n:";
  cin >> n;

  cout << "enter the value of r:";
  cin >> r;

  long long result = combination(n, r);
  cout << " combination(nCr) = " << result << endl;
  return 0;
}