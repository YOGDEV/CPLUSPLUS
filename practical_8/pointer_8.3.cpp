//8.3 practical
#include<iostream>
//using double pointer
using namespace std;
int main()
{
 int a=78;
 int *p;
 p=&a;
 cout<<*p<<endl;
int **q;
 q=&p;
 **q=786;
cout<<**q<<endl;
return 0;
}
