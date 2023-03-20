#include <iostream>
using namespace std;

int main()
{ // merge 2 sorted arrays
    int i, j, m, n, x, flag = 0;
    cout << "\nEnter 1st array size: ";
    cin >> m;
    int arr1[m];
    cout << "\nEnter sorted elements in increasing order for 1st array:\n";
    for (i = 0; i < m; i++)
        cin >> arr1[i];
    cout << "\nEnter 2nd array size: ";
    cin >> n;
    int arr2[n];
    cout << "\nEnter sorted elements in increasing order for 2nd array:\n";
    for (i = 0; i < n; i++)
        cin >> arr2[i];
    int arr[m + n];
    if (arr1[n - 1] < arr2[0])
    {
        for (i = 0; i < m; i++)
            arr[i] = arr1[i];
        for (j = 0; j < n; j++)
            arr[m + j] = arr2[j];
    }
    else
    {
        for (i = 0; i < n; i++)
            arr[i] = arr2[i];
        for (j = 0; j < m; j++)
            arr[n + j] = arr1[j];
    }

    for (int ele : arr)
        cout << ele;

    // to find a pair in array whose sum is exactly X
    cout << "\n\nto find a pair in array whose sum is exactly X";
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "\nEnter sorted elements in increasing order in the array:\n";
    for (i = 0; i < n; i++)
        cin >> arr1[i];
    cout << "Enter Integer: ";
    cin >> x;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arr1[i] + arr1[j] == x)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    //  to find a pair in array whose absolute difference is X
    cout << "\n\nto find a pair in array whose absolute difference is X";
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "\nEnter sorted elements in increasing order in the array:\n";
    for (i = 0; i < n; i++)
        cin >> arr1[i];
    cout << "Enter Integer: ";
    cin >> x;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arr1[j] - arr1[i] == x)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    // return array of squares of each number in increasing order
    cout << "\n\nto return array of squares of each number in increasing order";
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "\nEnter sorted elements in increasing order in the array:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
        cout << arr[i] * arr[i] << " ";

    return 0;
}