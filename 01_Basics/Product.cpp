/*
 * Program: Product of Three Numbers
 * ---------------------------------
 * Reads three integers from the user and calculates their product.
 *
 * Concepts Practiced:
 * - Variables and data types
 * - Standard input/output
 * - Arithmetic operators
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Enter the third number: ";
    cin >> thirdNumber;

    int product = firstNumber * secondNumber * thirdNumber;

    cout << "Product of the three numbers: " << product << endl;

    return 0;
}