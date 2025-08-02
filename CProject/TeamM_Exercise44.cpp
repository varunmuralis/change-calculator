// Exercise 4.3 by Varun Murali and Anika Nangia

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name1, name2, name3;
    double time1, time2, time3;

    cout << "Enter the names of three runners and their finishing times.\n";
    cout << "I will tell you who came in first, second, and third.\n\n";

    // Get the user input for Runner 1
    cout << "Name of Runner 1: ";
    getline(cin, name1);
    cout << "Runner 1's finishing time: ";
    cin >> time1;
    while (time1 <= 0) {
        cout << "Please enter a positive number for the time: ";
        cin >> time1;
    }
    cin.ignore();

    // Get the user input for Runner 2
    cout << "\nName of Runner 2: ";
    getline(cin, name2);
    cout << "Runner 2's finishing time: ";
    cin >> time2;
    while (time2 <= 0) {
        cout << "Please enter a positive number for the time: ";
        cin >> time2;
    }
    cin.ignore();

    // Get the user input for Runner 3
    cout << "\nName of Runner 3: ";
    getline(cin, name3);
    cout << "Runner 3's finishing time: ";
    cin >> time3;
    while (time3 <= 0) {
        cout << "Please enter a positive number for the time: ";
        cin >> time3;
    }

    // Rank the runners based on time
    string first, second, third;
    if (time1 < time2 && time1 < time3) {
        first = name1;
        if (time2 < time3) {
            second = name2;
            third = name3;
        } else {
            second = name3;
            third = name2;
        }
    } else if (time2 < time1 && time2 < time3) {
        first = name2;
        if (time1 < time3) {
            second = name1;
            third = name3;
        } else {
            second = name3;
            third = name1;
        }
    } else {
        first = name3;
        if (time1 < time2) {
            second = name1;
            third = name2;
        } else {
            second = name2;
            third = name1;
        }
    }

    // Final output
    cout << "\n" << first << " came in 1st place." << endl;
    cout << second << " came in 2nd place." << endl;
    cout << third << " came in 3rd place." << endl;

    return 0;
}

