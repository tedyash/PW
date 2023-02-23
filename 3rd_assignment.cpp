#include <iostream>
using namespace std;

int main()
{
    // to check for square or not
    int len, wid;
    cout << "Enter Length: ";
    cin >> len;
    cout << "\nEnter Width: ";
    cin >> wid;
    if (len == wid)
        cout << "\nIt's a Square.\n";
    else
        cout << "\nIt's a Rectangle.\n";

    // print absolute value of a number
    int abs_num;
    cout << "\nEnter a number: ";
    cin >> abs_num;
    cout << "\nAbsolute value of " << abs_num << " is " << abs(abs_num);

    // calculate profit or loss
    float profit, loss, cp, sp;
    cout << "\n\nEnter Cost Price: ";
    cin >> cp;
    cout << "\nEnter Sales Price: ";
    cin >> sp;
    profit = sp - cp;
    loss = cp - sp;
    if (sp > cp)
        cout << "\nProfit is: " << profit;
    else
        cout << "\nLoss is: " << loss;

    // to print positive number entered & skip the negative number entered
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    if (num > 0)
        cout << "\nNumber entered " << num << " is positive.";
    else
        cout << "\nNumber entered is negative and skipped.";

    // calculator using switch case
    int a, b;
    char ch;
    cout << "\nEnter first Operand: ";
    cin >> a;
    cout << "\nEnter second Operand: ";
    cin >> b;
    cout << "\nSelect Operation:\n'+'=Addition\n'-'=Subtraction\n'*'=Multiplication\n'/'=Division\n";
    cout << "Perform Operation: ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "\nSum is: " << a + b;
        break;
    case '-':
        cout << "\nDifference is: " << a - b;
        break;
    case '*':
        cout << "\nProduct is: " << a * b;
        break;
    case '/':
        cout << "Quotient is: " << a / b;
        break;
    }

    // calculate marks to grades
    int marks;
    cout << "\nEnter marks: ";
    cin >> marks;
    if (marks > 30)
    {
        if (marks > 40)
        {
            if (marks > 50)
            {
                if (marks > 60)
                {
                    if (marks > 70)
                    {
                        if (marks > 80)
                        {
                            if (marks > 90)
                                cout << "\nGrade : A+";
                            else
                                cout << "\nGrade : A";
                        }
                        else
                            cout << "\nGrade : B+";
                    }
                    else
                        cout << "\nGrade : B";
                }
                else
                    cout << "\nGrade : C";
            }
            else
                cout << "\nGrade : D";
        }
        else
            cout << "\nGrade : E";
    }
    else
        cout << "\nGrade : F";

    return 0;
}