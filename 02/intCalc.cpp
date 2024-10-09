#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main(){
  cout << "Please enter two numbers:\n";
  int val1;
  int val2;
  cin >> val1;
  cin >> val2;
  cout << "The smaller number is:" << min(val1, val2) << "\n";
  cout << "The larger number is:" << max(val1, val2) << "\n";
  cout << "The sum of the numbers is:" << val1 + val2 << "\n";
  cout << "The difference of the numbers is:" << val1 - val2 << "\n";
  cout << "The product of the number is:" << val1 * val2 << "\n";
  cout << "The ratio of the numbers is:" << val1 / val2 << "\n";
}
