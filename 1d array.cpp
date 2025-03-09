#include <iostream>
using namespace std;

#define SIZE 6  // Define the size of the 1D array

int main() {
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "Doubled values: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;

    return 0;
}