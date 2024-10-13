#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main(){
    cout << "please enter a number from 0-4 spelled out:\n";
    string str_num;
    cin >> str_num;
    if (str_num == "zero") {
        cout << "0\n";
    }
    else if (str_num == "one") {
        cout << "1\n";
    }
    else if (str_num == "two") {
        cout << "2\n";
    }
    else if (str_num == "three") {
        cout << "3\n";
    }
    else if (str_num == "four") {
        cout << "4\n";
    }
    else {
        cout << "not a number i know! 🤨\n";
    }
}
