#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n <= 1)
  {
    cout << n << " is neither prime nor composite." << endl;
  }
  else
  {
    bool isComposite = false;

    for (int i = 2; i < n / 2; i++)
    {
      if (n % i == 0)
      {
        isComposite = true;
        break;
      }
    }

    if (isComposite)
    {
      cout << n << " is a composite number." << endl;
    }
    else
    {
      cout << n << " is not a composite number." << endl;
    }
  }

  return 0;
}
