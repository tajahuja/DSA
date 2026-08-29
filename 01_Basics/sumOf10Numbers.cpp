/*
 * Program: Sum of First 10 Natural Numbers
 * -----------------------------------------
 * Calculates the sum of numbers from 1 to 10 using a for loop.
 *
 * Concepts Practiced:
 * - Variables
 * - for loop
 * - Increment operator
 * - Accumulation
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    cout << "The sum of the first 10 numbers is: " << sum << endl;

    return 0;
}