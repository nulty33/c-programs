#include <iostream>
#include <string>

using namespace std; 

// Define the Patient structure
struct Patient {
    string name;
    int age;
    string diagnosis;
};

// Function to display patient details
void displayPatients(const Patient& p) {
    cout << "Patient Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
    cout << endl;
}

int main() {
    // Create two patient records with hardcoded values
    Patient patient1 = {"James", 25, "Pneumonia"};
    Patient patient2 = {"Becky", 23, "Flu"};

    // Display patient records
    cout << "Patient 1 Details:" << endl;
    displayPatients(patient1);

    cout << "Patient 2 Details:" << endl;
    displayPatients(patient2);

    // Modify the program to allow user input
    Patient patient3;
    cout << "Enter patient name: ";
    getline(cin, patient3.name);

    cout << "Enter patient age: ";
    cin >> patient3.age;
    cin.ignore(); // Clear input buffer

    cout << "Enter patient diagnosis: ";
    getline(cin, patient3.diagnosis);

    // Display the patient record with user input
    cout << "Patient 3 Details (User Input):" << endl;
    displayPatients(patient3);

    return 0;
}