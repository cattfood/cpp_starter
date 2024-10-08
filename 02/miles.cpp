#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main(){
    cout << "Enter the number of miles:\n";
    double miles;
    double kilometers;
    cin >> miles;
    kilometers = miles * 1.609;
    cout << kilometers << " kilometers\n";
}
