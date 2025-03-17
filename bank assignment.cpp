#include <iostream>
#include <string>

using namespace std; 

// Define a structure to store customer account details
struct Customer {
    string name;             // Customer's name
    double accountBalance;   // Customer's account balance
    string lastTransaction;  // Description of the last transaction
};

// Function to display customer details
// The 'const' keyword ensures that the function does not modify the passed customer data
void displayCustomer(const Customer& c) {
    cout << "Customer Name: " << c.name << endl;
    cout << "Account Balance: $" << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
    cout << endl;
}

int main() {
    // Create two customer records with predefined (hardcoded) values
    Customer customer1 = {"John Oris", 5000.00, "Deposit of $300"};
    Customer customer2 = {"Brian Juma", 1500.50, "Withdrawal of $150"};

    // Display the details of the predefined customers
    cout << "Customer 1 Details:" << endl;
    displayCustomer(customer1);

    cout << "Customer 2 Details:" << endl;
    displayCustomer(customer2);

    // Allow user to input their own customer details
    Customer customer3;
    cout << "Enter customer name: ";
    getline(cin >> ws, customer3.name);  // Using 'ws' to handle leading whitespace

    cout << "Enter account balance: ";
    cin >> customer3.accountBalance;

    cin.ignore(); // Ignore newline character left in the buffer
    cout << "Enter last transaction: ";
    getline(cin, customer3.lastTransaction);  // Taking full input with spaces

    // Display the customer details entered by the user
    cout << "Customer 3 Details (User Input):" << endl;
    displayCustomer(customer3);

    return 0;
}