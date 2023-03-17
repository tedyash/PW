#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findElement(int arr[], int n)
{

    int leftMax[n];
    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
    int rightMin = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (leftMax[i] < arr[i] && rightMin > arr[i])
            return i;
        rightMin = min(rightMin, arr[i]);
    }
    return -1;
}

int oec(int arr[], int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
            ++odd;
    return odd;
}
int main()
{ //  count od odd & even integers in array
    int n, i, j;
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "\nEnter array elements:\n";
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int odd = oec(arr, n);
    cout << "\nOdd Integers in array: " << odd << "\nEven Integers in array: " << n - odd;

    //  sum of gratest & smallest integer in array
    cout << "\n\nFor printing sum of greatest & smallest integer int the array\n";
    cout << "Enter array size: ";
    cin >> n;
    cout << "\nEnter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    cout << "\nSum of greatest & smallest integer in the array = " << min + max;

    // reverse the array
    int swap = 0;
    cout << "\n\nFor reversing the array";
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "\nEnter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (i <= n - 1 - i)
        {
            swap = arr[i];
            arr[i] = arr[(n - 1) - i];
            arr[(n - 1) - i] = swap;
        }
    }
    cout << "\nReversed array:\n";
    for (int ele : arr)
        cout << ele << " ";

    // sum of two elements such that they belong to different arrays
    int n1, n2;
    cout << "\n\nFor min. sum of two elements such that they belong to different arrays";
    cout << "\nEnter 1st array size: ";
    cin >> n1;
    int a[n1];
    cout << "Enter 1st array elements:\n";
    for (i = 0; i < n1; i++)
        cin >> a[i];

    cout << "\nEnter 2nd array elements:\n";
    cin >> n2;
    int b[n2];
    cout << "Enter 2nd array elements:\n";
    for (i = 0; i < n2; i++)
        cin >> b[i];
    min = a[0] + b[0];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (min > (a[i] + b[j]))
            {
                min = a[i] + b[j];
            }
        }
    }
    cout << "\nMinimum Sum of two elements belonging to different arrays: " << min;

    // return no. not present in range

    cout << "\n\nFor returning number not present in range\n";
    cout << "Enter array size: ";
    cin >> n;
    cout << "\nEnter distinct array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = (n * (n + 1)) / 2, asum = 0;

    for (i = 0; i < n; i++)
    {
        asum += arr[i];
    }
    cout << "Missing number in range: " << sum - asum;

    // finding element to its left are smaller and to its right are larger
    cout << "\n\nFor finding element \n";
    cout << "Enter array size: ";
    cin >> n;
    cout << "\nEnter distinct array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is " << arr[findElement(arr, n)];
    return 0;
}
