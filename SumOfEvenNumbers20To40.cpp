/*
 * Program: Sum of Even Numbers Between 20 and 40
 * -----------------------------------------------
 * Calculates the sum of all even numbers from 20 to 40.
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
    int sum = 0;

    for (int i = 20; i <= 40; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    cout << "The sum of even numbers between 20 and 40 is: "
         << sum << endl;

    return 0;
}