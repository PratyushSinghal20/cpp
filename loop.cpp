#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter how many times to print 'Hello World': ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << "Hello World" << endl;
  }

  return 0;
}
