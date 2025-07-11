#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "enter the number :";
  cin >> num;

  if (num > 99 && num < 1000)
  {
    cout << "The number is a three-digit number." << endl;
  }
  else
  {
    cout << "The number is not a three-digit number." << endl;

    return 0;
  }
}