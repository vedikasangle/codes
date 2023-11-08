#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Ensure the number is non-negative
    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "Sum of the digits: " << sum << endl;

    return 0;
}
