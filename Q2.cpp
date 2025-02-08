#include <iostream>
using namespace std;

int main()
{
    int len;

    cout << "Enter the size of the array: ";
    cin >> len;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cout << "Enter the array[" << i << "]: ";
        cin >> arr[i];
    }

    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
    cout << "Reverse of the array is:" << endl;

    int largest = arr[0];
    int smallest = arr[0];
    int secondlargest = -1;
    int secondsmallest = -1;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }

        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
            secondsmallest = arr[i];
        }
    }

    // Checking if second largest and second smallest exist
    if (secondlargest == largest)
    {
        cout << "No second largest element exists." << endl;
    }
    else
    {
        cout << "Second Largest number is: " << secondlargest << endl;
    }

    if (secondsmallest == smallest)
    {
        cout << "No second smallest element exists." << endl;
    }
    else
    {
        cout << "Second Smallest number is: " << secondsmallest << endl;
    }

    return 0;
}