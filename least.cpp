#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter three positive integers: ";
  cin >> a >> b >> c;

  if (a <= 0 || b <= 0 || c <= 0)
  {
    cout << "Please enter only positive integers." << endl;
  }
  else
  {
    int least;

    if (a <= b && a <= c)
    {
      least = a;
    }
    else if (b <= a && b <= c)
    {
      least = b;
    }
    else
    {
      least = c;
    }

    cout << "The least number is: " << least << endl;
  }

  return 0;
}
