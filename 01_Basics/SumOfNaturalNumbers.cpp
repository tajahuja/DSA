/*
 * Program: Sum of Natural Numbers up to N
 * ----------------------------------------
 * Uses a function to calculate the sum of natural
 * numbers from 1 to N. Returns 0 when N is 0.
 *
 * Concepts Practiced:
 * - Functions
 * - Function parameters
 * - Return values
 * - for loop
 * - if-else conditions
 * - Accumulation
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int sum(int n) {
    int total = 0;

    if (n == 0) {
        return 0;
    } else {
        for (int i = 1; i <= n; i++) {
            total = total + i;
        }

        return total;
    }
}

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    cout << "Sum of natural numbers up to " << number
         << " is: " << sum(number) << endl;

    return 0;
}