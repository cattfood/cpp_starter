#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main() {
    double pennies;
    double nickels;
    double dimes;
    double quarters;
    double half_dollars;
    double dollar_coins;
    cout << "How many pennies do you have?\n";
    cin >> pennies;
    cout << "How many nickels do you have?\n";
    cin >> nickels;
    cout << "How many dimes do you have?\n";
    cin >> dimes;
    cout << "How many quarters do you have?\n";
    cin >> quarters;
    cout << "How many half dollars do you have?\n";
    cin >> half_dollars;
    cout << "how many dollar coins do you have?\n";
    cin >> dollar_coins;
    double total_amount = (0.01 * pennies) + (0.05 * nickels) + (0.1 * dimes) + (0.25 * quarters) * (0.5 * half_dollars) + dollar_coins;
    cout << "you have " << pennies << " pennies\n";
    cout << "you have " << nickels << " nickels\n";
    cout << "you have " << dimes << " dimes\n";
    cout << " you have " << quarters << " quarters\n";
    cout << "you have " << half_dollars << " half dollars\n";
    cout << "you have " << dollar_coins << " dollar coins\n";
    cout << "the value of all of your coins is $" << total_amount << "\n";
}
    
