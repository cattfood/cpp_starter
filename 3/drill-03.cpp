#include "../PPPheaders.h"


double num1, maxNum, minNum;
double cm = 1/100;
double in = 1/39.37;
double ft = 1/3.28;
string str;
vector<double> nums;
int amount; //amount of numbers entered
int total = 0; //total sum of numbers


int main() {
       while(true){
        cout << "please enter a number: (default meters)\n";
          cin >> str;
          if (str == "|") {
            cout << "you entered " << nums.size() << " numbers\n";
            cout << "the biggest number was: " << maxNum << "\n";
            cout << "the smallest number was: " << minNum <<"\n";
            cout << "the sum of your numbers is: " << total <<" meters\n";
            sort(nums.begin(), nums.end());
            for(int i=0; i < nums.size(); i++) {
                double numF = nums.at(i);
                cout << numF << " "; 
          } 
          break;
          }  
          // extract the units
         auto unit = str.substr(str.length() - 2);
         
    

          // determine which case are you in?
          /*
          - cm
          - km
          etc
          */
          // do the appropriate conversion to meters
        if (unit == "cm") {
          num1 = cm * stoi(str.substr(0, str.length() -2));
        } 
        else if (unit == "in") {
          num1 = in * stoi(str.substr(0, str.length() -2));
        }
        else if (unit == "ft") {
          num1 = ft * stoi(str.substr(0, str.length() -2));
        }
        else if (str.substr(str.length() - 1) == "m"){ // str.back() didn't work :(
          num1 = stoi(str.substr(0, str.length() -2));
        }
        else {
          cout << "i dont know that unit!\n";
        }
        
            
          // push the converted value to nums


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
            
            }
            cout << "\n";
            return 0;
       }
        

       

