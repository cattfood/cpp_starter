#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main() {
    cout << "Enter the name of the person you want to write to:\n";
    string first_name; //first name is a variable of type string
    cin >> first_name; //reads characters into first_name
    cout << "Dear " << first_name << ",\n";

}
