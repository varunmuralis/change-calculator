#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    // 1. How many pizzas in the factory
    int pizzas;
    cout << "How many Pizzas in the factory: ";
    cin >> pizzas;

    // 2. What is the radius
    double radius;
    cout << "What is the radius: ";
    cin >> radius;

    // Start time
    auto t1 = high_resolution_clock::now();

    // 3. Total Area of all the pizza
    double totalArea = 0;
    for (int i = 0; i < pizzas; i++) {
        double area = M_PI * pow(radius, 2);  // M_PI is from cmath
        totalArea += area;
    }

    // End time
    auto t2 = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(t2 - t1).count();

    cout << "Time Taken " << duration << " ms" << endl;
    cout << "Total area is " << totalArea << endl;

    return 0;
}
