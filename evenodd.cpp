#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "Enter a positive integer: ";
  cin >> num;

  if (num <= 0)
  {
    cout << "Please enter a positive integer." << endl;
  }
  else
  {

    if (num % 2 == 0)
    {
      cout << num << " is Even." << endl;
    }
    else
    {
      cout << num << " is Odd." << endl;
    }
  }

  return 0;
}
