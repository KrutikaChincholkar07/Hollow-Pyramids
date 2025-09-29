#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    // Upper part
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        for (int j = 1; j <= 2 * (rows - i); j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    // Lower part
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        for (int j = 1; j <= 2 * (rows - i); j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    return 0;
}
