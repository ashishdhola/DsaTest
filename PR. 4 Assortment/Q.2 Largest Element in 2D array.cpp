// Q.2 Largest Element in 2D Array
// Develop a Program to find the largest element from a given 2D array.

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    cout << "The largest element in the 2D array is: " << largest << endl;

    return 0;
}