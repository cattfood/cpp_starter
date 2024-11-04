#include "../PPPheaders.h"
#include <iostream>
#include <string>
#include <algorithm>

double median;

int main() {
    vector<double> temps;
    for (double temp; cin >>temp;) {
        temps.push_back(temp);
        }
    sort(temps.begin(), temps.end());
        double median;
        if (temps.size() % 2 == 0) {
            median = (temps[((temps.size() / 2) - 1)] + temps[temps.size()/2]) / 2; //calculates diffrence between 2 middle values
        }
        else {
            median = temps[temps.size() /2];
        }
        cout << median << "\n";
}
    

        
