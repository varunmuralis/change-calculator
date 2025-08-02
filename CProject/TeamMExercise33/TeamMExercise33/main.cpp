// Team M Exercise 3.4 by Varun Murali and Anika Nangia

#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

int main() {
    double itemPrice;
    int quantity;
    double totalBeforeDiscount;
    double discountAmount;
    double totalOwed;
    const double DISCOUNT_RATE = 0.10; // 10%

    // Get item price and quantity from user
    cout << "Enter the price of the item: $";
    cin >> itemPrice;

    cout << "Enter the quantity purchased: ";
    cin >> quantity;

    // Calculate totals
    totalBeforeDiscount = itemPrice * quantity;
    discountAmount = totalBeforeDiscount * DISCOUNT_RATE;
    totalOwed = totalBeforeDiscount - discountAmount;

    // Display the result with two decimal places
    cout << fixed << setprecision(2);
    cout << "Total amount owed after 10% discount: $" << totalOwed << endl;

    return 0;
}
