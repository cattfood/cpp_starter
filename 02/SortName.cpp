#include "../PPPheaders.h"
#include <iostream>
#include <string>
#include <algorithm>

int main(){
    cout << "please enter three names:\n";
    string name1;
    string name2;
    string name3;
    cin >> name1;
    cin >> name2;
    cin >> name3;
    array<string, 3> names = {name1, name2, name3};
    sort(names.begin(), names.end());
    for (int i=0; i<3; i++){
        cout<< names[i] << " ";
    }
}
