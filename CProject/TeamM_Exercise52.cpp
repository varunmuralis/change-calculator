// Exercise 5.2 by Varun Murali & Anika Nangia

#include <iostream>
using namespace std;

int main() {
    int number;
    int largest = 0;
    int smallest = 0;
    bool firstNumber = true;

    cout << "You will enter a series of integers and\n";
    cout << "I will then tell you the largest and\n";
    cout << "the smallest numbers you entered.\n";
    cout << "Enter -99 to terminate the series.\n\n";

    while (true) {
        cout << "Enter an integer (-99 to quit): ";
        cin >> number;

        if (number == -99)
            break;

        if (firstNumber) {
            largest = smallest = number;
            firstNumber = false;
        } else {
            if (number > largest)
                largest = number;
            if (number < smallest)
                smallest = number;
        }
    }

    if (firstNumber) {
        cout << "\nNo valid numbers were entered." << endl;
    } else {
        cout << "\nThe greatest number you entered is " << largest << "." << endl;
        cout << "The least number you entered is " << smallest << "." << endl;
    }

    return 0;
}

