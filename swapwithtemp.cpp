#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  int temp = a;
  a = b;
  b = temp;

  cout << "After swapping: a = " << a << ", b = " << b << endl;
  return 0;
}
