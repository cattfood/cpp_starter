#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main(){
    cout << "please enter a number:\n";
    int num;
    cin >> num;
    if (num % 2 == 1) {
        cout << num << " is odd!\n";
    }
    else {
        cout << num << " is even!\n";
    }
}
