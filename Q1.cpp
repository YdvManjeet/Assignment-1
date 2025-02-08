#include <iostream>
using namespace std;

int isprime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    int n, count;
    cout << "Enter a Positive Integer: ";
    cin >> n;
    count = isprime(n);
    if (count == 2)
    {
        cout << "The Number entered is a prime number" << endl;
    here:
        n++;
        isprime(n);
        count = isprime(n);
        if (count == 2)
        {
            cout << "The next prime number greater the n is: " << n;
        }
        else
            goto here;
    }
    else
    {
        cout << "The Number entered is not a prime number" << endl;
        cout << "The factors of n are:" << endl;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}