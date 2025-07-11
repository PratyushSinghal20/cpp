#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter three sides of a triangle: ";
  cin >> a >> b >> c;

  if (a > 0 && b > 0 && c > 0)
  {
    if (a + b > c && b + c > a && a + c > b)
    {
      cout << "Yes, these can be the sides of a triangle." << endl;
    }
    else
    {
      cout << "No, these cannot form a triangle." << endl;
    }
  }
  else
  {
    cout << "Sides must be positive numbers." << endl;
  }

  return 0;
}
