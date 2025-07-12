#include <iostream>
using namespace std;

int main()
{
  cout << "enter the number of terms:";
  int n;
  cin >> n;

  cout << "enter the first term:";
  int a;
  cin >> a;

  for (int i = 0; i < n; i++)
  {
    cout << a << " ";
    a = a * 2;
  }
  cout << endl;
  return 0;
}