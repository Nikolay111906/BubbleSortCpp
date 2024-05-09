#include <iostream>

using namespace std;

int main() {
    int digitals[10];

    cout << "Enter 10 numbers to fill the array: ";

    for (int i = 0; i < 10; i++) {
        cin >> digitals[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (digitals[j] > digitals[j + 1]) {
                int b = digitals[j];
                digitals[j] = digitals[j + 1];
                digitals[j + 1] = b;
            }
        }
    }

    cout << "An array in sorted form: ";

    for (int i = 0; i < 10; i++) {
        cout << digitals[i] << " ";
    }

    return 0;
}