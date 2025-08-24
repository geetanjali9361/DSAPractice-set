#include <iostream>
using namespace std;

int main() {
    // Printing even numbers
    cout << "Even numbers from 1 to 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\n\nOdd numbers from 1 to 100:\n";
    // Printing odd numbers
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
