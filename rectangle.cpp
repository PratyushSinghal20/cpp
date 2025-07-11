#include <iostream>
using namespace std;

int main()
{
  float length, breadth, area, perimeter;

  cout << "Enter length of the rectangle: ";
  cin >> length;

  cout << "Enter breadth of the rectangle: ";
  cin >> breadth;

  area = length * breadth;
  perimeter = 2 * (length + breadth);

  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;

  if (area > perimeter)
  {
    cout << "Area is greater than perimeter." << endl;
  }
  else
  {
    cout << "Area is not greater than perimeter." << endl;
  }

  return 0;
}
