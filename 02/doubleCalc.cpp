#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main(){
    cout << "PLease enter two numbers:\n";
    double val1;
    double val2;
    cin >> val1;
    cin >> val2;
    cout << "The smaller number is:" << min(val1, val2) << "\n";
    cout << "The larger number is:" << max(val1, val2) << "\n";
    cout << "The sum of the numbers is:" << val1 + val2 << "\n";
    cout << "The difference of the numbers is:" << val1 - val2 << "\n";
    cout << "The product of the numbers is:" << val1 * val2 << "\n";
    cout << "The ratio of the numbers is:" << val1 / val2 << "\n";
}
