#include "../PPPheaders.h"

void solutions (double a, double b, double c) {
    double disc = b * b - 4 * a * c; // calc the discriminant
    
    if (disc < 0) {
        cout << "no solutions!!!!" << endl; // output that no solutions were found
    }
    else {
    double pos_sol = (-b + sqrt(disc)) / (2 * a); // calcuclate the positive and negative solutions
    double neg_sol = (-b - sqrt(disc)) / (2 * a);

    cout << "the solutions are: " << pos_sol << ", " << neg_sol << endl; // output the solutions
    }
}

int main() {
    cout << "please enter coefficients a, b, and c to solve your quadratic (only real solutions)" << endl;
    double a,b,c;
    cin >> a >> b >> c;
    solutions (a, b, c);
}