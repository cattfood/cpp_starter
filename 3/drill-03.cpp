#include "../PPPheaders.h"
#include <iostream>
#include <string>

int num1, num2;

int main(){
        cout << "please enter two numbers:\n";
       while(cin >> num1 >>num2){
        cout << "the smaller number is " << min(num1, num2) << "\n";
        cout << "the larger number is " << max(num1, num2) << "\n";
       cout << "please enter two numbers:\n"; 
       }
}
        

       

