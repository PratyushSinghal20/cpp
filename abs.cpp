#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  if (num < 0)
  {
    cout << "Absolute value: " << -num << endl;
  }
  else
  {
    cout << "Absolute value: " << num << endl;
  }

  return 0;
}
