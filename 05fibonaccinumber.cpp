#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 0) {
        c = a;
    } else if (n == 1) {
        c = b;
    } else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
    }

    cout << "The " << n << "th Fibonacci number is: " << c << endl;

    return 0;
}
