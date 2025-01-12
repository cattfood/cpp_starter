#include "../PPPheaders.h"
const vector<string> DAYS = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

void report(const vector<int>& study_min, double goal);

int main () {
    vector<int> study_times(7);
    double goal;

    cout << "please enter the total hours you would like to study for this week:" << endl;
    cin >> goal;
    cout << "please enter the amount you studied each day: (sunday-saturday)" << endl;
    for (int i = 0; i < 7; i++) {
        cin>>study_times[i];
    }
    report(study_times, goal);
}

void report(const vector<int>& study_min, double goal){
    double total_mins;
    int best_day = 0;
    string highest_day;

    for (int i = 0; i < 7; i++) {
        total_mins += study_min[i];
        if (study_min[best_day] < study_min[i]) {
            best_day = i;
        }
    }
    highest_day = DAYS[best_day];

    cout << "your best day was:" << highest_day << endl;
    if (total_mins >= goal*60) {
        cout << "you met your goal!!!!😸😸😸 great job!!!" << endl;
    }
    else {
        cout << "you didn't meet your goal, but you'll get it next time!!!! i believe in you!! 😻😻😻" << endl;
    }
}