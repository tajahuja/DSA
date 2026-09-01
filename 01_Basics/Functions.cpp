/*
 * Program: Double a Number Using a Function
 * ------------------------------------------
 * Defines a function that takes an integer
 * and returns twice its value.
 *
 * Concepts Practiced:
 * - Functions
 * - Function parameters
 * - Return values
 * - Function calls
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int doubleNumber(int n) {
    int result = 2 * n;
    return result;
}

int main() {
    int number = 7;

    cout << doubleNumber(number) << endl;

    return 0;
}
