#include <iostream>
using namespace std;

int main()
{
  cout << "Enter a number to generate its multiplication table: ";
  int num;
  cin >> num;

  cout << "Multiplication Table of " << num << ":\n";

  for (int i = 1; i <= 10; i++)
  {
    cout << num << " x " << i << " = " << num * i << endl;
  }

  return 0;
}
