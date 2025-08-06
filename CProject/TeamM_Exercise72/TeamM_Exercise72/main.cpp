// Exercise 7.2 by Varun Murali & Anika Nangia

#include <iostream>
using namespace std;

int main() {
    // Array of prices
    double prices[] = {10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, 0.56, 14.75, 4.78};
    const int size = 10;
    double percentage;

    // Ask user for the percentage increase
    cout << "Enter increase percentage (for example, enter 15 for 15%): ";
    cin >> percentage;

    // Convert percentage to a multiplier (e.g., 20% becomes 0.20)
    double multiplier = 1 + (percentage / 100.0);

    // Increase each price and display the updated values
    for (int i = 0; i < size; ++i) {
        prices[i] *= multiplier;
        cout << fixed;         // Use fixed-point notation
        cout.precision(2);     // Display 2 decimal places
        cout << prices[i] << endl;
    }

    return 0;
}

