#include <iostream>

using namespace std;

int main() {
    long long a, b; // Use long long to handle large numbers
    cin >> a >> b;

    long long average = (a / 2) + (b / 2) + (a % 2 + b % 2) / 2;

    cout << "Average: " << average << endl;

    return 0;
}
