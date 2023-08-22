#include <iostream>
#include <vector>
using namespace std;
void SumOfIndexLtoR(vector<int> v, int l, int r)
{ // Sum of elements between the index L and R
    int sum = 0;
    for (int i =l; i <= r; i++)
        sum += v[i];
    cout << "Sum of elements between the index L and R = " << sum<<endl;
}


void heighestaltitude(vector<int> &v)
{
    int sum = 0, max = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        v[i] = sum;
    }
    for (int ele : v)
    {
        if (ele > max)
            max = ele;
    }
    cout << endl<< "Heighest altitude of a point: "<< max;
}

void product(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        int product = 1;

        for (int j = 0; j < ans.size(); j++)
        {
            if (i != j)
                product *= ans[j];
        }
        cout << product << " ";
    }
}

void UpdateQueries(vector<int> &v, int l, int r, int x)
{
    for (int i = l; i <= r; i++)
        v[i] += x;
}

int main()
{
    int n, i,j, l, r, ele, x, q;
    vector<int> v;

    // Sum of L to R Index Elements
    cout << "\nSum of elements between the index L and R ";
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "Enter array elements\n";
    for (i =0; i <n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    cout << "Enter left(l) and right (r) index\n";
    cin >> l >> r;
    SumOfIndexLtoR(v, l, r);

    // Highest Altitude
    
    cout << "\n\nTo return highest altitude";
    cout << "\nEnter number of net heights present: ";
    cin >> n;
    cout << "Enter net heights:\n";
    vector<int> height;
    for (int i = 0; i < n + 1; i++)
    {
        if (i == 0)
            height.push_back(0);
        else
        {
            cin >> ele;
            height.push_back(ele);
        }
    }
    heighestaltitude(height);


    // Max Length of equal no. of 0s & 1s Sequence
    cout<<"\nMax Length of equal no. of 0s & 1s Sequence\n";
    cout<<"enter array size";
cin>>n;
int arr1[n];
cout<<"enter array elements";
for(i=0;i<n;i++)
cin>>arr1[i];
int max_len = 0;
    for (int i = 0; i < n; i++) {
        int count_0 = 0, count_1 = 0;
        for (int j = i; j < n; j++) {
            if (arr1[j] == 0)
                count_0++;
            else
                count_1++;
            if (count_0 == count_1)
                max_len = max(max_len, j - i + 1);
        }
    }
    cout<<"max_len: "<<max_len;

    
    //Consecutive Subarrays with odd sum
    cout<<"\nConsecutive Subarrays with odd sum\n";
cout<<"enter array size";
cin>>n;
int arr[n];
cout<<"enter array elements";
for(i=0;i<n;i++)
cin>>arr[i];
int k=0;
for(int ele:arr)            // individual odd elemene subarray
{if (ele%2!=0)
k++;}
x=j=0;
for(i=0;i<n;i++){           // consecutive odd sum array calculation
    j+=arr[i];
    if(j%2==0)
    break;
    x+=1;
}
cout<<(k+x);



    //product of acout << "\n\nTo return array ans such that ans[i] is equal to product of all elements of arr except arr[i]";
    cout << "\n\nTo return array ans such that ans[i] is equal to product of all elements of arr except arr[i]";
    cout << "\nEnter array size: ";
    cin >> n;
    cout << "Enter array elements\n";
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        ans.push_back(ele);
    }
    product(ans);

    // for 'q' queries update array of size'n' by value 'x' from index l to r

    cout << "\n\nTo 'q' queries update array of size'n' by value 'x' from index l to r";
    cout << "\nEnter the size of the array (n): ";
    cin >> n;
    vector<int> v1(n);
    fill(v1.begin(), v1.end(), 0);
    cout << "Enter the value to be added (x): ";
    cin >> x;
    cout << "Enter the number of queries (q): ";
    cin >> q;
    while (q--)
    {
        cout << "Enter left (l) and right (r) indexes:\n";
        cin >> l >> r;
        UpdateQueries(v1, l, r, x);
    }
    for (int ele : v1)
        cout << ele << " ";

    return 0;
}