// Team M: Exercise 5.4 by Varun Murali & Anika Nangia

#include <iostream>
using namespace std;

int main() {
    int first, second, sum = 0;

    // Get user input
    cout << "First integer: ";
    cin >> first;

    cout << "Second integer: ";
    cin >> second;

    // Check if first is greater than second
    if (first > second) {
        cout << "The first integer must be smaller than the second integer. Please run the program again." << endl;
        return 1; // Exit the program with an error code
    }

    // Adjust the first number to the next even if it's odd
    if (first % 2 != 0) {
        first++;
    }

    // Sum all even numbers between first and second (inclusive)
    for (int i = first; i <= second; i += 2) {
        sum += i;
    }

    // Display result
    cout << "Sum of even integers: " << sum << endl;

    return 0;
}
