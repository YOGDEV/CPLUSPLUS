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
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  cin>>arr[i][j];
}

cout<<"\nMatrix before evaluated :\n";//printing matrix
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  cout<<arr[i][j]<<"  ";
  cout<<"\n";
}
cout<<"\nprinting pattern :\n\n";
for(i=0;i<n;i++)//printing value of  arr[i][j]-2*i +j
{ for(j=0;j<n;j++)
   {
            arr[i][j]-=2*i+j;
           cout<<arr[i][j]<<"  ";
    }
  cout<<"\n";
}
return 0;
}
