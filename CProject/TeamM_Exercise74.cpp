// Team M: Exercise 7.4 by Varun Murali & Anika Nangia

#include <iostream>
using namespace std;

int main() {
    // Parallel arrays for IDs, prices, and quantities
    const int SIZE = 5;
    int ids[SIZE] = {10, 14, 34, 45, 78};
    int prices[SIZE] = {125, 600, 250, 350, 225};
    int quantities[SIZE] = {5, 3, 9, 10, 2};

    int inputID;

    while (true) {
        cout << "Enter the product ID (0 or a negative number to end): ";
        cin >> inputID;

        // Check for exit condition
        if (inputID <= 0) {
            break;
        }

        // Search for the product ID
        bool found = false;
        for (int i = 0; i < SIZE; i++) {
            if (ids[i] == inputID) {
                cout << "Price: $" << prices[i] << endl;
                cout << "Quantity: " << quantities[i] << endl;
                found = true;
                break;
            }
        }

        // If ID not found
        if (!found) {
            cout << "Product ID " << inputID << " is not available." << endl;
        }
    }

    return 0;
}

