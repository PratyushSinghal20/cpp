#include <iostream>
using namespace std;

int main()
{
  int x = 12;
  int *ptr = &x;
  cout << "Value of x: " << x << endl;
  *ptr = 20;
  cout << "Value of x after using pointer: " << x << endl;
  return 0;
}