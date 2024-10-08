#include "../PPPheaders.h"
#include <iostream>
#include <string>

int main() {
    cout <<"Enter your name:\n";
    string user_name;
    cin >> user_name;
    cout << "Enter the name of the person you want to write to:\n";
    string first_name; //first name is a variable of type string
    cin >> first_name; //reads characters into first_name
    cout << "Enter the name of your friend:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Enter your recipient's age:\n";
    int age;
    cin >> age;
    if (age <= 0 or age > 110) {
        simple_error("you're kidding!");
    }
    cout << "Dear " << first_name << ",\n";
    cout <<"    How are you doing? I heard you got a cat! :3 "; 
    cout << "By the way, how is "<<friend_name<<"? ";
    cout << "Heard you turned "<< age<< "! ";
    if (age == 17) {
        cout << "next year you can vote!\n";
    }
    else if (age > 70) {
        cout << "Are you retired?\n";
    }
    else {
        cout << "Next year you will be " << age + 1 <<"! \n";
    }
    cout << "Yours Sincerely,\n";
    cout <<"    "<< user_name<< "\n";
}
