#include "../PPPheaders.h"
#include <iostream>
#include <string>
#include <algorithm>

int main(){
    cout << "please enter three numbers:\n";
    int num1;
    int num2;
    int num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
   array<int, 3> nums = {num1, num2, num3};
    sort(nums.begin(), nums.end());
    for (int i=0; i<3; i++){
        cout << nums[i] << " ";
    }
 }
