#include <iostream>
using namespace std;

int main()
{
  cout << "enter the numver of terms :";
  int n;
  cin >> n;

  cout << " enter the first term :";
  int a;
  cin >> a;

  cout << " enter the common difference :";
  int d;
  cin >> d;

  cout << "The arithmetic progression is: ";
  for (int i = 0; i < n; i++)
  {
    cout << a + i * d << " ";
  }
  cout << endl;
  return 0;
}