#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

int main() {
    int table[ROWS][COLS];

    cout << "Enter " << ROWS * COLS << " elements for the multiplication table: ";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> table[i][j];
        }
    }

    cout << "Multiplication Table:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}