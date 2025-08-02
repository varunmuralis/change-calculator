#include <iostream>
using namespace std;

int callMe() {
    cout << "Hello World\n";
    #if 0
    /*
    int value = 10; /* hello bro */
    cout << "abc";
    */
    #endif

}


int main() {
    cout << "Hello World";
    callMe();

}

