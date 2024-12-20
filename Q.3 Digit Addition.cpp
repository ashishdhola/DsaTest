/*
Q.3 Digit Addition
Develop a Program to find the sum of a number's first and last digits.
Example:
Input: Enter any number: 384
Output: The sum of the first and the last digit: 7

*/

#include <iostream>
using namespace std;
    

    int main()
    {
        int num, sum, firstdigite, lastdigite;

        cout<< "enter any number: ";
        cin >> num;


        lastdigite=num%10;

        while(num >= 10)
        {
            num = num/10;
        } 

        firstdigite=num;

        sum = firstdigite+lastdigite;


        cout<< "sum is number: " << sum << endl;


        return 0;
    }
