#include "../PPPheaders.h"
#include <iostream>
#include <string>

string str1;
int int1;//char converted to an int

int main() {
cout << "please enter a string" <<"\n";
cin >> str1;
for (char i : str1) {
    int1 = i - '0';
    cout << i <<" , " << int1 <<"\n";
}
}

