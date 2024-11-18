#include "../PPPheaders.h"
int low_bound = 0;
int high_bound = 101;
int num_mean = 50;
string input;

int main() {
while (high_bound - low_bound > 1) {
    cout << "is your number bigger than or equal to " << num_mean << "?\n";
    cin >> input;
    if (input == "yes") {
        low_bound = num_mean;
    }
    if (input == "no") {
        high_bound = num_mean;
    }
    if (input == "stop") {
        break;
    }
    num_mean = (low_bound + high_bound)/2;
}
cout << "your number is: " << num_mean << endl;
return 0;

}