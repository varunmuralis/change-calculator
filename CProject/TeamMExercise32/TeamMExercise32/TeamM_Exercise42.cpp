// Team M: Exercise 4.2 by Varun Murali and Anika Nangia

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double amountOwed, amountPaid;
    
    // Ask the user to enter the amount owed
    cout << "Enter the amount owed: ";
    cin >> amountOwed;
    
    // Ask the user to enter the amount paid
    cout << "Enter the amount paid: ";
    cin >> amountPaid;
    
    // Make sure that the amount paid is less than the amount owed
    if (amountPaid < amountOwed) {
        cout << "The amount paid is less than the amount owed. Please run the program again." << endl;
    } else {
        // Calculate total change in cents
        int changeInCents = round((amountPaid - amountOwed) * 100);
        
        // Calculate number of dollars
        int dollars = changeInCents / 100;
        changeInCents %= 100;
        
        // Calculate number of quarters (25 cents)
        int quarters = changeInCents / 25;
        changeInCents %= 25;
        
        // Calculate number of dimes (10 cents)
        int dimes = changeInCents / 10;
        changeInCents %= 10;
        
        // Calculate number of nickels (5 cents)
        int nickels = changeInCents / 5;
        changeInCents %= 5;
        
        // Remaining change is in pennies (1 cent)
        int pennies = changeInCents;
        
        // Display total change and coin breakdown
        cout << "Change to return: $" << (amountPaid - amountOwed) << endl;
        cout << "Dollars: " << dollars << endl;
        cout << "Quarters: " << quarters << endl;
        cout << "Dimes: " << dimes << endl;
        cout << "Nickels: " << nickels << endl;
        cout << "Pennies: " << pennies << endl;
    }

    return 0;
}

