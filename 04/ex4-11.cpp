


void print_fib (int num); // outputs fibonnacci sequence

int main() {
    int n;
    cout << "please enter the amount of values of the fibonnacci sequence would you like to write" << endl;
    cin >> n;
    print_fib(n);
}

void print_fib(int num) {
    int fnum = 1;
    int p_fnum = 0;// previous fibonnacci number
    int n_fnum;
    cout << 1 << endl;
    for (int i = 0; i < num; i++) {
        n_fnum = fnum + p_fnum;
        cout << n_fnum << endl;
        p_fnum = fnum;
        fnum = n_fnum;
    }
}