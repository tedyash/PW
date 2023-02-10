// First Program, Variables And Reading I/O

#include <iostream>
using namespace std;

int main()
{ // product of two numbers
    int x, y;
    cout << "Enter two numbers: \n";
    cin >> x >> y;
    int product = x * y;
    cout << product;

    // ASCII value of enterd character
    char ASCII;
    cout << "\nEnter character: ";
    cin >> ASCII;
    cout << "ASCII value :" << int(ASCII);

    // area of rectangle
    float len, wid;
    cout << "\nEnter length & breadth :\n";
    cin >> len >> wid;
    float area = len * wid;
    cout << "\nArea of rectangle:" << area;

    // cube of a number
    int cube;
    cout << "\nEnter number to be cubed :\n";
    cin >> cube;
    cout << "\nCube of " << cube << " is " << cube * cube * cube;

    /// size of basic data types
    cout << "\n\nSize of (char) " << sizeof(char) << " bytes";
    cout << "\nSize of (short) " << sizeof(short) << " bytes";
    cout << "\nSize of (int) " << sizeof(int) << " bytes ";
    cout << "\nSize of (long) " << sizeof(long) << " bytes";
    cout << "\nSize of (long long) " << sizeof(long long) << " bytes";
    cout << "\nSize of (float) " << sizeof(float) << " bytes";
    cout << "\nSize of (double) " << sizeof(double) << " bytes";
    cout << "\nSize of (long double) " << sizeof(long double) << " bytes";
    cout << "\nSize of (bool) " << sizeof(bool) << " bytes";

    // swap two numbers with a third variable
    int a;
    int b, c;
    cout << "\n\nEnter two numbers a & b :\n";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "\nSwapping " << a << " & " << b << " :";
    return 0;
}