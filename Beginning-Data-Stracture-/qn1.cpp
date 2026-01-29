#include <iostream>

using namespace std;

// a. Implementation using a for loop (Iterative)
long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << factorialIterative(num) << endl;
    }

    return 0;
}