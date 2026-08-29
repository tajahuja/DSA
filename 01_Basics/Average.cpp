/*
 * Program: Average of Two Numbers
 * --------------------------------
 * Reads two numbers from the user and calculates their average.
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
    double firstNumber, secondNumber,average;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    average = (firstNumber + secondNumber) / 2;

    cout << "The average of the numbers is: " << average << endl;

    return 0;
}