#include <iostream>
using namespace std;

int main()
{
  int ram, shyam, ajay;

  cout << "Enter the age of Ram: ";
  cin >> ram;

  cout << "Enter the age of Shyam: ";
  cin >> shyam;

  cout << "Enter the age of Ajay: ";
  cin >> ajay;

  if (ram <= shyam && ram <= ajay)
  {
    cout << "Ram is the youngest." << endl;
  }
  else if (shyam <= ram && shyam <= ajay)
  {
    cout << "Shyam is the youngest." << endl;
  }
  else
  {
    cout << "Ajay is the youngest." << endl;
  }

  return 0;
}
