#include <iostream>
using namespace std;
int main()
{
    // check whether two numbers entered are equal or not
    int a, b;
    cout << "enter two numbers a & b:\n";
    cin >> a >> b;
    int c = a == b ? true : false;
    cout << "Result for if two numbers are equal(1) or not equal (0):" << c;

    // check if both conditions 'a<50' and 'b<50 are true'
    cout << "\n\n";
    c = a < 50 && b < 50 ? true : false;
    cout << "Result for both 'a<50 and b<50' (1) else (0):" << c;

    // find how many girls recieved grades "A"
    int total = 45;
    int boys = 25;
    int girls = total - boys;
    int n, p;
    cout << "\n\n";
    cout << "Total Pupils : " << total << endl;
    cout << "Boys : " << boys << endl;
    cout << "Girls : " << girls;
    cout << "\nEnter the percentage and number of boys getting grade'A':\n";
    cin >> p >> n;
    int gradeAstudents = (n * 100) / p;
    cout << "\nPercentage and number of girls getting grade'A': " << (((gradeAstudents - n) * 100) / gradeAstudents) << endl;
    cout << (gradeAstudents - n);

    // sum of first & second last digit of a 5 digit number
    int x;
    cout << "\nEnter a 5-digit Number : ";
    cin >> x;
    int first = x / 10000;
    int second_last = (x % 100) / 10;
    cout << "Sum of first and second last digit of a 5-digit number: " << first + second_last;

    // sum of 3-digit number
    int y;
    cout << "\nEnter 3-Digit Number: ";
    cin >> y;
    int sum_3 = y / 100 + (y / 10) % 10 + y % 10;
    cout << sum_3;

    // perform basic arithmetic operations
    int i, j, choice;
    cout << "\nEnter two numbers : \n";
    cin >> i >> j;
    cout << "1-Sum\n2-Difference\n3-Product\n4-Division\n5-Remainder\nEnter Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Sum of " << i << " and " << j << " is " << i + j;
        break;
    case 2:
        cout << "Difference of " << i << " and " << j << " is " << i - j;
        break;
    case 3:
        cout << "Product of " << i << " and " << j << " is " << i * j;
        break;
    case 4:
        cout << "Division of " << i << " and " << j << " is " << i / j;
        break;
    case 5:
        cout << "Modulus of " << i << " and " << j << " is " << i % j;
        break;
    }

    return 0;
}