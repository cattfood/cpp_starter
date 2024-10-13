#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main() {
    cout << "please enter an operation and two numbers:\n";
    string operation;
    double val1;
    double val2;
    cin >> operation;
    cin >> val1;
    cin >> val2;
    if (operation == "+" || operation == "plus") {
        cout << val1 + val2 << "\n";
    }
    else if (operation == "-" || operation == "minus") {
        cout << val1 - val2 << "\n";
    }
    else if (operation == "*" || operation == "mul") {
        cout << val1 * val2 << "\n";
    }
    else if (operation == "/" || operation == "div") {
        cout << val1 / val2 << "\n";
    }
    else {
        cout << "not an operation i know! 🤣";
    }
}

