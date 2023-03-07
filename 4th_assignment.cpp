#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int isPrimeNumber(int num)
{
    int i, isPrime = 1;
    for (i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1 || num == 2)
        return 1;
    else
        return 0;
}

int main()
{ // Factorial of a Number
    int N, fact = 1, i, j, n, n2, n3, n1, a, b, c, x, y;
    cout << "\nEnter Number to find its factorial: ";
    cin >> N;
    i = N;
    while (N != 0)
    {
        fact *= N;
        --N;
    }
    cout << "Factorial of " << i << ": " << fact << endl;

    // print all Armstrong Numbers between 100 to 500

    cout << "\nPrint Armstrong numbers\nFrom:";
    cin >> x;
    cout << "To:";
    cin >> y;
    cout << "Numbers are:\n";
    for (int i = x; i <= y; i++)
    {
        a = i % 10;
        b = (i % 100) / 10;
        c = i / 100;
        int arm = a * a * a + b * b * b + c * c * c;
        if (i == arm)
            cout << i << endl;
    }

    // Sum of N natural numbers

    int sum = 0;
    cout << "\nEnter a number to get sum of n natural numbers: ";
    cin >> N;
    while (N > 0)
    {
        sum += N;
        --N;
    }
    cout << "Sum = " << sum << endl;

    // reverse a given integer number

    int reversed_number = 0, remainder;

    cout << "\nEnter an integer to be reversed: ";
    cin >> n1;

    while (n1 != 0)
    {
        remainder = n1 % 10;
        reversed_number = reversed_number * 10 + remainder;
        n1 /= 10;
    }

    cout << "Reversed Number = " << reversed_number << endl;

    // print Cross pattern(X)

    int space = 0;
    cout << "\nEnter number  of rows to form pattern X : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i || j == (n + 1 - i))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // print alphabet diamond pattern ♦

    int rowNum;
    cout << "\nFor printing alphabet diamond pattern ";
    cout << "\nEnter the number of rows : ";
    cin >> rowNum;
    space = rowNum - 1;
    for (i = 1; i <= rowNum; i++)
    {
        int b = 0;
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << char(b + 65);
            b++;
        }
        cout << endl;
    }
    space = 1;
    for (i = 1; i <= (rowNum - 1); i++)
    {
        int b = 0;
        for (j = 1; j <= space; j++)
            cout << " ";
        space++;
        for (j = 1; j <= (2 * (rowNum - i) - 1); j++)
        {
            cout << char(b + 65);
            b++;
        }
        cout << endl;
    }
    cout << endl;

    // print + pattern

    cout << "For printing + pattern \nEnter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i != n / 2 + 1)
        {
            for (int j = 1; j <= n / 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        else
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
        cout << endl;
    }

    // triangle of prime numbers

    int rows, counter = 2;
    cout << ("For printing prime number pyramid\nEnter the number of rows: ");
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            while (!isPrimeNumber(counter))
            {
                counter++;
            }
            cout << counter;
            counter++;
            cout << " ";
        }
        cout << endl;
    }

    // to check whether a Number can be expressed as a sum of 2 prime nos.

    cout << "Enter a +ve Integer: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            for (j = 2; j < n; j++)
            {
                if (isprime(j))
                {
                    if ((i + j) == n)
                        cout << n << "=" << i << "+" << j << endl;
                }
            }
        }
    }

    // print rectangle out of *
    int r1, c1;
    cout << "\nEnter no. of rows: ";
    cin >> r1;
    cout << "\nEnter no. of columns: ";
    cin >> c1;
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}