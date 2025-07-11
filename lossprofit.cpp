#include <iostream>
using namespace std;

int main()
{
  float costPrice, sellingPrice;

  cout << "Enter Cost Price: ";
  cin >> costPrice;

  cout << "Enter Selling Price: ";
  cin >> sellingPrice;

  if (sellingPrice > costPrice)
  {
    float profit = sellingPrice - costPrice;
    cout << "Profit of " << profit << endl;
  }
  else if (sellingPrice < costPrice)
  {
    float loss = costPrice - sellingPrice;
    cout << "Loss of " << loss << endl;
  }
  else
  {
    cout << "No profit, no loss." << endl;
  }

  return 0;
}
