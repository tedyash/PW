#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
int i,j,k,r,x,ele,m,n;  
int max=INT32_MIN;


// print max value in 2d array
cout<<"\nprint max value in 2d array\n";
cout<<"enter array size i.e. rows and columns\n";
cin>>m>>n;
int arr[m][n];
cout<<"enter array elements\n";
for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
        {cin>>arr[i][j];
        if(max<arr[i][j])
        max=arr[i][j];}}
        
cout<<endl<<max;

// rotate matrix by 90° clockwise
cout<<"\nrotate matrix by 90 Degree clockwise\n";
cout<<"enter matrix order\n";
    cin>>r;
    cout<<"enter matrix elements row wise\n";
    int mat[r][r];
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            cin>>mat[i][j];}}
     for(i=0;i<r;i++){
        for(j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    
for(i=0;i<r;i++){
for(int j=0;j<r/2;j++){
swap(mat[i][j],mat[i][r-j-1]);}
}
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            cout<<mat[i][j]<<" ";}
        cout<<endl;}

// make complete row and column 0 if an element of matrix is 0
cout<<"\nmake complete row and column 0 if an element of matrix is 0\n";
cout<<"enter rowns & columns:\n ";
cin>>m>>n;
cout<<"enter matrix elements:\n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
}
vector<pair<int,int>> ans; //  storing  co-ordinates of cells which have value 0
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(mat[i][j]==0){
        ans.push_back({i,j});
        }
    }
}
 for (int i = 0; i < ans.size(); i++) {                         // co-ordinate vector dispaly
    cout << "(" << ans[i].first << "," << ans[i].second << ")" << std::endl;  
  } 
for(int i=0;i<ans.size();i++) //traversing the ans vector and making row and column of that
{ //call to 0
int x=ans[i].first;
int y=ans[i].second;
int row=0;
int col=0;
while(row<m){
mat[row][y]=0;
row++;
}
while(col<n){
mat[x][col]=0;
col++;
}
}
cout<<endl;
    for(int i=0;i<m;i++){       //display
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}