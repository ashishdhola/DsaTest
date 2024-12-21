/*
Q.1 Alphabet Skipper
Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using
a do-while loop.
Example:
Output: a, e, i, m, q, u, y

*/


#include <iostream>
using namespace std;

int main() {
    const int skip = 4; 

    cout << "Output: ";
    for (char letter = 'a'; letter <= 'z'; letter += skip) {
        cout << letter; 
        
        if (letter + skip <= 'z') { 
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}
