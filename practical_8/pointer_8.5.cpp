#include<iostream>
using namespace std;
int fact(int n)//using recursion function
{
 if(n==0||n==1)
 return 1;
 return n*fact(n-1);
}
int main(void)
{
  int n;
  cout<<"Enter number whose factorial have to be calculated : ";
  cin>>n;
  int c=fact(n);
 cout<<"\nFactorial using Recursion function is : ";
  cout<<"\n"<<c<<endl;
  return 0;
}
