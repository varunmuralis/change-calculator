// Team M: Exercise 4.6 by Varun Murali and Anika Nangia
#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

int main() {
    char package;
    double hours;
    double total = 0.0;

    // Prompt for package selection
    cout << "Enter the package you have purchased (A, B, or C): ";
    cin >> package;

    // Prompt for number of hours
    cout << "Enter the number of hours used (0 - 744): ";
    cin >> hours;

    // Calculate total based on selected package and validate input inside switch
    switch (package) {
        case 'A':
        case 'a':
            if (hours >= 0 && hours <= 744) {
                total = 9.95;
                if (hours > 10) {
                    total += (hours - 10) * 2.00;
                }
                cout << fixed << setprecision(2);
                cout << "Total amount due: $" << total << endl;
            } else {
                cout << "Invalid number of hours. Must be between 0 and 744." << endl;
            }
            break;

        case 'B':
        case 'b':
            if (hours >= 0 && hours <= 744) {
                total = 14.95;
                if (hours > 20) {
                    total += (hours - 20) * 1.00;
                }
                cout << fixed << setprecision(2);
                cout << "Total amount due: $" << total << endl;
            } else {
                cout << "Invalid number of hours. Must be between 0 and 744." << endl;
            }
            break;

        case 'C':
        case 'c':
            if (hours >= 0 && hours <= 744) {
                total = 19.95; // Unlimited hours
                cout << fixed << setprecision(2);
                cout << "Total amount due: $" << total << endl;
            } else {
                cout << "Invalid number of hours. Must be between 0 and 744." << endl;
            }
            break;

        default:
            cout << "Invalid package selection. Please choose A, B, or C." << endl;
            break;
    }

    return 0;
}
