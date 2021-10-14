#include<iostream>
using namespace std;
int main(void)
{
int n;
cout<<"\nEnter not of rows :  ";
cin>>n;
char arr[n][n];
cout<<"\nPrinting pattern :\n";
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
   if(j<=i)
   arr[i][j]='*';
   else
   arr[i][j]=' ';
  }
 cout<<"\n";
 }
 
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<n;j++)
   cout<<arr[i][j]<<" " ;
   cout<<"\n";
   }
 return 0;
 }
