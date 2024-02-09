#include <iostream>
#include <cmath>

//Write a C++ program that calculates n!. Use function for this calculation.

using namespace std;

int main() {
    int n;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}