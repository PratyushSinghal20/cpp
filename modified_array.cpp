#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " integers:\n";
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; ++i)
  {
    if (i % 2 == 0)
    {

      arr[i] += 10;
    }
    else
    {

      arr[i] *= 2;
    }
  }

  cout << "Modified array:\n";
  for (int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
