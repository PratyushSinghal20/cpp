#include <iostream>
using namespace std;

int main()
{
  cout << "Even numbers from 1 to 100 are:" << endl;

  for (int i = 2; i <= 100; i += 2)
  {
    cout << i << " ";
  }

  return 0;
}
