#include <iostream>
using namespace std;

void rotateMatrix(int matrix[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            swap(matrix[i][j], matrix[i][k]);
        }
    }
}

void printMatrix(int matrix[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix, n);

    cout << "Matrix after 90-degree clockwise rotation:\n";
    printMatrix(matrix, n);

    return 0;
}
