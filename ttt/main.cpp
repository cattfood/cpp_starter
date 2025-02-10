#include "../PPPheaders.h"
#include <cassert>

constexpr char P1 = 'X';
constexpr char P2 = 'O';
constexpr char FREE = 'E'; // represents an open spot on the grid

enum class WinState {
    p1, p2, tie, nobody
};

ostream& operator<<(ostream& os, const WinState& ws){
        switch (ws){
        case WinState::p1:
            os << "P1 Wins";
            break;
        case WinState::p2:
            os << "P2 Wins";
            break;
        case WinState::tie:
            os << "cats game!";
            break;
        default:
            os << "Nobody has one yet";
            break;
    }
    return os;
}

void render_board(const vector<char>& board);
// puts player piece at that loacion on the tic tac toe board
void place_piece(char player, int cell_number, vector<char>& board);
void test();
bool checkMatch(const vector<char>& board, int i, int j, int k);
//check for a win given a board state
WinState check_win(const vector<char>& board);
WinState get_winner(char winner);
// fill up the board for testing
void _fill_board(vector<char>& board);

// continue prompting user until you receive a valid location
// valif as long as the location is free
int get_input(const vector <char>& board);

 int main() {
    vector<char> board(9, FREE);
    render_board(board);
    int input;
    char current_player = P1;
    WinState winner = WinState::nobody;
    while (true) {
        input = get_input(board);

        place_piece(current_player, input, board);
        render_board(board);

        winner = check_win(board);
        if ( winner != WinState::nobody) {
            break;
        }
        if (current_player == P1) {
            current_player = P2;
        }
        else {
            current_player = P1;
        }
    }
    cout << winner << endl;
 }

 void render_board(const vector<char>& board) {
    for (int i=0; i < board.size(); i++){
        switch (board.at(i)){
            case P1:
            case P2:
                cout << board.at(i);
                break;
            case FREE:
                cout << i+1;
                break;
        }
        if ((i+1) % 3 == 0) {
            cout << endl;
        }
        else {
            cout << " ";
        }
    }
 }

void place_piece(char player, int cell_number, vector<char>& board) {
    board[cell_number] = player;
}


WinState check_win(const vector<char>& board) {
    for (int rowi=0; rowi <3; rowi++ ){
        // horizontal
        int start = rowi* 3;
        if (checkMatch(board, start, start +1, start + 2)){
            return get_winner(board.at(start));
        }
        // vertical checks
        if (checkMatch(board, rowi, rowi + 3, rowi + 6)) {
            return get_winner(board.at(rowi));
        }
    }
    // checking diagonals 
    if (checkMatch(board, 0, 4, 8)) {
        return get_winner(board.at(0));
    }
    if (checkMatch(board, 2, 4, 6)) {
        return get_winner(board.at(2));
    }
    //count tie
    
    for(int i=0; i < board.size(); i++) {
        if (board.at(i) == FREE) {
            return WinState::nobody;
        }
    }
    
    return WinState::tie;

}

WinState get_winner(char winner){
    switch (winner){
        case P1:
            return WinState::p1;
        case P2:
            return WinState::p2;
        default:
        return WinState::nobody;
    }
}

bool checkMatch(const vector<char>& board, int i, int j, int k){
    return board.at(i) == board.at(j) && board.at(j) == board.at(k);
}

int get_input(const vector <char>& board){
    cout << ">>" << endl;
    int input;
    while (true) {
        cin >> input;
        if(cin.fail()) {
            cout << "thats not an int!!" << endl;
             cin.clear();  // Reset the state of cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        input--;
        if (!(input < 0 || input > 8 || board.at(input) != FREE)){
            return input;
        }
        cout << "invalid input" << endl;
    }
}

void  test(){
    // test place
    cout << "1. testing place_pieces " << endl;
    vector<char> board(9, FREE);
    place_piece(P1, 1, board);
    assert(board.at(0) == P1);
    // test that nobody won
   cout << "2. testing check_win" << endl;
   cout << "testing no win scenario" << endl;
   assert(check_win(board) == WinState::nobody);
   cout << "horizontal win" << endl;
    // test each type of win (accross, down, diag)
    for (int i=1; i <= 3; i++) {
        place_piece(P1,i, board);
    }
    assert(checkMatch(board, 0, 1, 2));
    assert(check_win(board) == WinState::p1);
    cout << "vertical win test" << endl;
    board = vector<char>(9, FREE);
    for (int i=1;i <=7; i = i + 3) {
        place_piece(P1, i, board);
    }
    
    render_board(board);
    cout << "diagonal down win test" << endl;
    board = vector<char>(9, FREE);
    for (int i=1;i <=9; i = i + 4) {
        place_piece(P1, i, board);
    }
    
    render_board(board);
    assert (check_win(board) == WinState::p1);
    cout << "diagonal up win test" << endl;
    board = vector<char>(9, FREE);
    for (int i=3;i <=7; i = i + 2) {
        place_piece(P1, i, board);
    }
    render_board(board);
    assert (check_win(board) == WinState::p1);
}
void _fill_board(vector<char>& board){
    for (int i=1; i <=8; i++) {
        if (i%2==0){
            place_piece(P1,i, board);
        } else{
            place_piece(P1, i, board);
        }
    }
}