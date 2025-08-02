#include <iostream>
using namespace std;

void numbers() {
    int x;
    int y = 0;
    cin >> x;
    if (x = 20) {
        y = 3;
    }
    cout << y;
}
void char_value() {
    cout << !'a';
    char A = 'A';
    char a = 'a';
    cout << a << endl;
    cout << static_cast<int>(a) << endl;
    cout << A << endl;
    cout << static_cast<int>(A) << endl;
}

void booleansValue () {
char key;
    cin >> key;
    if (key == 'q') {
        cout << "quit" << endl;
    } else {
        cout << "pizza" << endl;
    }


}

int operations() {
    int x = 5;
    cout << ((x) - (3 > 0));

}

int hello() {
    cout << "Hello ";
}

int world() {
    cout << "World";
}


int main() {
    numbers();
    return 0;
}

