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

long long ncr(int n, int r)
{
  if (r > n)
  {
    return 0;
  }
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << ncr(i, j) << " ";
    }
    cout << endl;
  }
}