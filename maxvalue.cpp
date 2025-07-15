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

  int maxVal = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (arr[i] > maxVal)
    {
      maxVal = arr[i];
    }
  }

  cout << "Maximum value in the array is: " << maxVal << endl;

  return 0;
}
