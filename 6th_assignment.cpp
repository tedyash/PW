#include <iostream>
using namespace std;
void sq(int n)
{
    n = n * n;
    cout << n << endl;
}

void circle(float r)
{
    float area, circumference;
    area = r * r * 3.14;
    circumference = r * 2 * 3.14;
    cout << "\nCircumference of circle = " << circumference << "\nArea of circle = " << area;
}
bool vote(int n)
{
    if (n >= 18)
        return true;
    else
        return false;
}

void isOdd(int a, int b)
{
    int i;
    for (i = a; i < b; i++)
    {
        if (i % 2 == 0)
            cout << " ";
        else
            cout << i;
    }
}

bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, i, j;
    float r;
    cout << "\nEnter number upto which square is required for each number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sq(i);
    }
    // to print area and circumference of circle for given radius
    cout << "\nEnter circle radius: ";
    cin >> r;
    circle(r);

    //  person is eligible to vote or not
    cout << "\n\nEnter the age of person to check eligibility for voting: ";
    cin >> n;
    if (vote(n))
        cout << "Eligibility: YES";
    else
        cout << "Eligibility: No";

    // print all odd numbers
    int a, b;
    cout << "\n\nEnter 2 Numbers a & b:\n";
    cin >> a >> b;
    isOdd(a, b);

    // print all prime numbers
    cout << "\n\nEnter 2 Number a & b:\n";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}