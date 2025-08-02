// Exercise 2.4 by Varun Murali & Anika Nangia

#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize 5 variables
    double one = 1.000;
    double two = 1.414;
    double three = 1.732;
    double four = 2.000;
    double five = 2.236;
    
    /* Creates the heading utilizing \t (horizontal tab)
     and \n (line break) */
    cout << "N\tSquare Root\n";
    cout << "=\t===========\n";
    
    /* Creates the actual table utilizing \t (horizontal tab)
     and \n (line break) again */
    cout << "1\t" << one << "\n";
    cout << "2\t" << two << "\n";
    cout << "3\t" << three << "\n";
    cout << "4\t" << four << "\n";
    cout << "5\t" << five << "\n";
    
    return 0;
}
