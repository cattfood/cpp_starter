#include "../PPPheaders.h"

double ctok(double c) { // converts Celsius to Kelvin 
    double k = c + 273.15;
    if (c < -273.15) {
        return nan("");
    }
    else {
    return k;
    }
}

double ktoc(double k) { // converts Kelvin to Celsius 
    double c = k - 273.15;
    if (k < 0) {
        return nan("");
    }
    else {
    return k;
    }
}

int main() {
    double ic = 0; // declare input variable
    double ik = 0; 
    cin >> ic; // retrieve temperature to input variable
    cin >> ik;
    double k = ctok(ic); // convert temperature
    double c = ktoc(ik); // convert temperature
    if (k == nan("")) {
        cout << "error: temperature too low!!!" << endl;
        }
    else {
        cout << k << endl; // print out temperature
        }
    if (c == nan("")) {
        cout << "error: temperature too low!!!" << endl;
        }
    else {
        cout << c << endl; // print out temperature
        }
}