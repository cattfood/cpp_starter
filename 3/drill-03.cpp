#include "../PPPheaders.h"
#include <iostream>
#include <string>

double num1, num2;
double similarity = 0.01;

int main(){
        cout << "please enter two numbers:\n";
       while(cin >> num1 >> num2){
           if (num1 == num2) {
               cout << "these numbers are equal!!\n";
           }
           else {
        cout << "the smaller number is " << min(num1, num2) << "\n";
        cout << "the larger number is " << max(num1, num2) << "\n";
        if (fabs(num1 - num2) <= similarity) {
            cout << "these numbers are almost equal!!\n";
        } 
           }
        cout << "please enter two numbers:\n";
           
       }
}
        

       

