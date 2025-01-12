#include "../PPPheaders.h"
#include <cassert>

vector<int> generate_key(); // generates key for bulls and cows
void eval_guess(const vector<int>& key, const vector<int>& guess, int& bulls, int& cows); // evaluates guess and updates bulls and cows
void print_bc(int bulls, int cows); // prints the number of bulls and cows
void test();

int main() {
    test();
  vector<int> guess(4); // stores the guess made  by user
  vector<int> key = generate_key();
  int bulls, cows;

  while (bulls < 4) {
    cout << "please enter your guess" << endl;

    for (int i = 0; i < 4; i++) {
        cin >> guess[i];
    }
    eval_guess(key, guess, bulls, cows);
    printbc(bulls, cows);
  }  

  cout << "you won!!! 😸" << endl;
}

vector<int> generate_key() {
    srand(time(0));
    vector<int> key;
    int digit = rand() % 10;

    while (key.size() < 4) {
        if (find(key.begin(), key.end(), digit) == 4) { //checks if number is a duplicate
            key.push_back(digit);
            }
    }
}

void eval_guess(const vector<int>& key, const vector<int>& guess, int& bulls, int& cows) {
    for (int i = 0; i < 4; i++) {
        if (key[i] == guess[i]) {
            bulls++;
        }
        else if (find(key.begin(), key.end(), guess[i]) != 4) {
            cows++;
        }
    }
}

void test() {
  int bulls, cows;
  vector<int> key = {1, 2, 3, 4};
  vector<int> guess = {1, 3, 5, 9};

  eval_guess(key, guess, bulls, cows);

  assert (bulls == 1);
  assert (bulls == 1);

}

