#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;
  float half = x / 2.0; // Use 2.0 to ensure floating-point division
  cout << "Half of " << x << " is: " << half << endl;
  return 0;
}
