/*
Q.2 Digit Counter
Develop a Program to count the total number of digits in a number.
Example:
Input: Enter any number: 754
Output: Total number of digits: 3
*/


#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter any number: ";
    cin >> number;


    if (number < 0) {
        number = -number; 
    }

    do {
        count++;
        number /= 10;  
    } while (number != 0);

    cout << "Total number of digits: " << count << endl;

    return 0;
}
