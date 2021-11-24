//TASK 8 //Pratical 7...
#include<iostream>
using namespace std;
int main(void)
{
int n;
cout<<"\nEnter not of rows :  ";
cin>>n;
char arr[n][n];
cout<<"\nPrinting pattern :\n\n";
for(int i=n;i>=1;i--)
{
  for(int j=1;j<=n;j++)
  {
   if(j<i)
   arr[i][j]=' ';
   else
   arr[i][j]='*';
  }
 }
 
 for(int i=n;i>=1;i--)
 {
   for(int j=1;j<=n;j++)
   cout<<arr[i][j]<<" " ;
   cout<<"\n";
   }
 return 0;
 }
