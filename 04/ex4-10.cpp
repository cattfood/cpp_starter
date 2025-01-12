#include "../PPPheaders.h"

double make_sum (int n, const vector<double>& nums); // takes a number and a vector of numbers and sums the amount of numbers given

int main () {
    vector<double> numbers;
    int additions;
    double num;
    cout << "please enter the amount of numbers you would like to add" << endl;
    cin >> additions;
    cout << "please enter the numbers that you would like to sum" << endl;
    while (cin >> num) {
        numbers.push_back(num);
    }
    cout << make_sum (additions, numbers) << endl;
}

double make_sum (int n, const vector<double>& nums) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return sum;
}