#include "../PPPheaders.h"

double ctof (double c) {
    double f = (c * 9/5) + 32;
    return f;
}

double ftoc (double f) {
    double c = (f - 32) * 5/9;
    return c;
}

int main () {
    double nc;
    double nf;
    cout << "please enter celsius and then farenheight" << endl;
    cin >> nc >> nf;
    double f = ctof(nc); // convert temperature
    double c = ftoc(nf); // convert temperature
    cout << f << ", " << c << endl;
}