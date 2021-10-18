#include<iostream>
using namespace std;
int fact(int n)//using function
{int f=1;
 if(n==1)
 return 1;
 while(n>1)
 {
  f=f *n;
  n--;
 }
return f;
}
int main(void)
{
  int n;
  cout<<"Enter number whose factorial have to be calculated : ";
  cin>>n;
  int c=fact(n);
 cout<<"\nFactorial using function is : ";
  cout<<"\n"<<c<<endl;
  return 0;
}
