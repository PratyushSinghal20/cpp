#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

int permutation(int n, int r)
{
  if (r > n)
    return 0;
  return factorial(n) / factorial(n - r);
}

int main()
{
  int n, r;

  cout << "Enter the value of n: ";
  cin >> n;

  cout << "Enter the value of r: ";
  cin >> r;

  int result = permutation(n, r);
  cout << "Permutation (nPr) = " << result << endl;

  return 0;
}