// Q.3 Transpose of 2D Array
// Develop a Program to find the transpose matrix of a given 2D array.
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

    int trans[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}