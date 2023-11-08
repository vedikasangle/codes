#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping, a = " << a << " and b = " << b << endl;

    // Swap a and b without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping, a = " << a << " and b = " << b << endl;

    return 0;
}
