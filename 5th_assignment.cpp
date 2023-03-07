#include <iostream>
#include <math.h>
using namespace std;

int dec2bin(int n, int count = 0)
{
    int binary = 0, i = 1;
    while (n > 0)
    {
        binary = binary + ((n % 2) * i);

        if ((n % 2) * i == 0)
            ++count;

        i *= 10;
        n /= 2;
    }

    cout << "Number of zeros in binary equivalent: " << count << endl;
    return binary;
}

int bin2dec(int n)
{
    int i = 0, decimal = 0;
    while (n != 0)
    {
        decimal = decimal + ((n % 10) * pow(2, i));
        ++i;
        n /= 10;
    }
    return decimal;
}

int compare(int m, int n)
{
    if (m > n)
        return m;
    else
        return n;
}

int main()
{ // sum of decimal nos. into binary
    int a, sum = 0, i;
    cout << "\nEnter number upto which sum is required in binary: ";
    cin >> a;
    for (i = 1; i <= a; i++)
        sum += i;
    cout << dec2bin(sum);

    // find 0's in binary number excluding preceding zeros
    cout << "\nEnter natural number: ";
    cin >> a;
    dec2bin(a, 0);

    //  compare 2 binary numbers and return greatest number in decimal format
    int x, y, max;
    cout << "\nEnter numbers to be compared in binary format:\n";
    cin >> x >> y;
    x = bin2dec(x);
    y = bin2dec(y);
    cout << "Greatest of the entered number: " << compare(x, y);
    return 0;
}