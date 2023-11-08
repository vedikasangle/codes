#include <iostream>

using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binary[32]; // Assuming 32-bit binary representation

    int i = 0; // Index to keep track of the current binary digit

    if (decimalNumber == 0) {
        binary[0] = 0;
        i = 1;
    } else {
        while (decimalNumber > 0) {
            binary[i] = decimalNumber % 2;
            decimalNumber /= 2;
            i++;
        }
    }

    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    cout << endl;

    return 0;
}
