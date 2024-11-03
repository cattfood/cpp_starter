#include "../PPPheaders.h"
#include <iostream>
#include <string>
#include <algorithm>

double num1, maxNum, minNum;
vector<double> nums;
int amount; //amount of numbers entered
int total = 0; //total sum of numbers


int main(){
        cout << "please enter a number (in meters):\n";
       while(cin >> num1){
          nums.push_back(num1);
          total+= num1;
       if (num1 < minNum) {
           cout << num1 << " is the smallest number so far!\n";
           minNum = num1;
           } 
       if (num1 > maxNum) {
           cout << num1 << " is the biggest number so far!\n";
           maxNum = num1;
           }
           amount++;
        cout << "please enter a number:\n";
        } 
        cout << "you entered " << amount << " numbers\n";
        cout << "the biggest number was: " << maxNum << "\n";
        cout << "the smallest number was: " << minNum <<"\n";
        cout << "the sum of your numbers is: " << total <<" meters\n";
        sort(nums.begin(), nums.end());
        for(int i=0; i < nums.size(); i++) {
            double numF = nums.at(i);
            cout << numF << " "; 
        }
        cout << "\n";
}
        

       

