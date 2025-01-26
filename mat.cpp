#include <iostream>

using namespace std;

int calculateFine(int daysOverdue) {
    if (daysOverdue >= 1 && daysOverdue <= 7) {
        return daysOverdue * 20;
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        return daysOverdue * 50;
    } else if (daysOverdue >= 15) {
        return daysOverdue * 100;
    } else {
        return 0; // No fine for negative or zero days overdue
    }
}

int main() {
    int daysOverdue;

    cout << "Enter the number of days the book is overdue: ";
    cin >> daysOverdue;

    int fine = calculateFine(daysOverdue);

    cout << "The fine for the overdue book is: Ksh. " << fine << endl;

    return 0;
}
