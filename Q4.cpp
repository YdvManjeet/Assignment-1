#include <iostream>
using namespace std;

void printSpiral(int n)
{
    int spiral[n][n];

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n)
    {
        
        for (int i = left; i <= right; i++)
            spiral[top][i] = num++;
        top++;

        
        for (int i = top; i <= bottom; i++)
            spiral[i][right] = num++;
        right--;

        
        for (int i = right; i >= left; i--)
            spiral[bottom][i] = num++;
        bottom--;

        
        for (int i = bottom; i >= top; i--)
            spiral[i][left] = num++;
        left++;
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << spiral[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the spiral: ";
    cin >> n;

    printSpiral(n);

    return 0;
}
