// Team M: Exercise 4.6 by Varun Murali and Anika Nangia
#include <iostream>
#include <iomanip> // for setprecision
#include <cctype>  // for toupper

using namespace std;

int main() {
    char package;
    double hours;
    double total = 0.0;

    // Prompt for package selection
    cout << "Enter the package you have purchased (A, B, or C): ";
    cin >> package;
    package = toupper(package); // Convert to uppercase for consistency

    // Validate package input
    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package selection. Please choose A, B, or C." << endl;
        return 1;
    }

    // Prompt for number of hours
    cout << "Enter the number of hours used (0 - 744): ";
    cin >> hours;

    // Validate hours input
    if (hours < 0 || hours > 744) {
        cout << "Invalid number of hours. Must be between 0 and 744." << endl;
        return 1;
    }

    // Calculate total based on selected package
    switch (package) {
        case 'A':
            total = 9.95;
            if (hours > 10) {
                total += (hours - 10) * 2.00;
            }
            break;
        case 'B':
            total = 14.95;
            if (hours > 20) {
                total += (hours - 20) * 1.00;
            }
            break;
        case 'C':
            total = 19.95; // Unlimited hours
            break;
    }

    // Output the result with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Total amount due: $" << total << endl;

    return 0;
}
