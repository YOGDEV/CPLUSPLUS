// Task 6 : To print Series (n*n+n) using Recursion
#include<iostream>
using namespace std ;
void series(int n);
int main()
{ 
int num  ;
cout<<"Enter a Number : ";
cin>>num;
//long ans = fact(num) ;
series(num) ;
return 0 ;
}
void series(int n)
{
  if(n==1)
  {
    cout<<n+1<<" " ;
  }
  else
  {
     int c = (n*n+n ) ;
     series(n-1) ;
     cout<<c << " " ;
     return  ;
  }
}
