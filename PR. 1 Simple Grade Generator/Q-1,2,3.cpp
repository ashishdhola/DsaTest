#include <iostream>
using namespace std;

int main() {
    float score;
    
    cout << "Enter your score (out of 100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Please enter a valid score between 0 and 100." << endl;
    } else {
        char grade = (score >= 90) ? 'A' :
                     (score >= 80) ? 'B' :
                     (score >= 70) ? 'C' :
                     (score >= 60) ? 'D' : 'F';

        cout << "Your grade is " << grade << ". ";

        switch (grade) {
            case 'A':
                cout << "Excellent work! Congratulations! You are eligible for the next level" << endl;
                break;
            case 'B':
                cout << "Well done! Congratulations! You are eligible for the next level" << endl;
                break;
            case 'C':
                cout << "Good job! Congratulations! You are eligible for the next level" << endl;
                break;
            case 'D':
                cout << "You passed, but you could do better. Congratulations! You are eligible for the next level " << endl;
                break;
            case 'F':
                cout << "Please try again next time." << endl;
                break;
            default:
                cout << "Invalid grade." << endl; 
                break;
        }
    }

    return 0;
}