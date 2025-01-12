#include "../PPPheaders.h"

double ctok(double c) { // converts Celsius to Kelvin 
double k = c + 273.15;
return k;
}

int main() {
double c = 0; // declare input var iable
cin >> c; // retrieve temperature to input var iable
double k = ctok(c); // convert temperature
cout << k << endl; // print out temperature
}