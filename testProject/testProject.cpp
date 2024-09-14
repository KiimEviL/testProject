#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

	int move;
	const int NUM_SQUARES = 9;
	vector<char> board;

	const int WINNING_ROWS[8][3] = { {0, 1, 2},
								{3, 4, 5},
								{6, 7, 8},
								{0, 3, 6},
								{1, 4, 7},
								{2, 5, 8},
								{0, 4, 8},
								{2, 4, 6} };

	const int TOTAL_ROWS = 8;

	for (int i = 0; i < TOTAL_ROWS; i++) {
		board.push_back(i * 10);
	}
	for (int i = 0; i < TOTAL_ROWS; i++) {
		cout << (int)board[i] << endl;
	}

	cout <<endl << (int)board[WINNING_ROWS[0][2]] << endl; //2, 5, 6

	//for (int row = 0; row < TOTAL_ROWS; row++) {

	//}

	return 0;

}