#include <iostream>
using namespace std;

int main()
{

  int marks;
  cout << "Enter the marks obtained: ";
  cin >> marks;

  if (marks >= 81 && marks <= 100)
  {
    cout << "very good " << endl;
  }
  else
  {
    if (marks >= 61 && marks <= 80)
    {
      cout << " good " << endl;
    }
    else
    {
      if (marks >= 41 && marks <= 60)
      {
        cout << " average " << endl;
      }
      else
      {
        if (marks >= 0 && marks <= 40)
        {
          cout << " poor " << endl;
        }
        else
        {
          cout << " invalid marks " << endl;
        }
      }
    }
  }

  return 0;
}