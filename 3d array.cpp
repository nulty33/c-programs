#include <iostream>
using namespace std;

#define DEPTH 2
#define ROWS 2
#define COLS 2

int main() {
    int cube[DEPTH][ROWS][COLS];

    cout << "Enter " << DEPTH * ROWS * COLS << " elements for a " << DEPTH << "x" << ROWS << "x" << COLS << " 3D array: \n";
    for (int d = 0; d < DEPTH; d++) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cin >> cube[d][i][j];
            }
        }
    }

    cout << "3D Array: \n";
    for (int d = 0; d < DEPTH; d++) {
        cout << "Depth " << d + 1 << ":\n";
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cout << cube[d][i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}