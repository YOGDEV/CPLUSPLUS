//Task 7 //  practical_7...
#include<iostream>
using namespace std;
int main(void)
{
int n;
cout<<"\nEnter not of rows :  ";
cin>>n;
char arr[n][n];
cout<<"\nPrinting pattern :\n";
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=n;j++)
  {
   if(i<=j)
   arr[i][j]='*';
   else
   arr[i][j]=' ';
  }
 }
 
 for(int i=1;i<=n;i++)
 {
   for(int j=1;j<=n;j++)
   cout<<arr[i][j]<<" " ;
   cout<<"\n";
   }
 return 0;
 }
