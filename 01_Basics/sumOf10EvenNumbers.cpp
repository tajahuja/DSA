/*
 * Program: Sum of First 10 Even Numbers
 * --------------------------------------
 * Calculates the sum of even numbers from 1 to 20.
 *
 * Concepts Practiced:
 * - for loop
 * - if statement
 * - Modulus operator
 * - Accumulation
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int even = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            even = even + i;
        }
    }

    cout << "The sum of the first 10 even numbers is: " << even << endl;

    return 0;
}