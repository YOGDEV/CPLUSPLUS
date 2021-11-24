#include<iostream>
using namespace std;
int main(void)
{
int n;
cout<<"\nEnter no of rows and columns : ";
cin>>n;
int arr[n][n];
int i,j;
cout<<"\nEnter matrix elements :\n";//reading elements of matrix..
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
  cin>>arr[i][j];
}

cout<<"\nMatrix before evaluated :\n";//printing matrix
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
  cout<<arr[i][j]<<"  ";
  cout<<"\n";
}
cout<<"\nMatrix after evalution :\n";//printing valve of 10-arr[i][j] 
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<10-arr[i][j]<<"  ";
}
cout<<"\n";
}
return 0;
}
