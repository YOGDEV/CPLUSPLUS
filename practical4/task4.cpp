#include<iostream>
using namespace std;

namespace first{
void sum(int x,int y){
cout<<x+y<<endl;}
}

namespace second{
void sum(float x, float y){
cout<<x+y<<endl;}
}
using namepsace first;
using namespace second;

int main()
{
sum(5,6);
sum(6.4,8.4);
sum(6.4,8.4);
sum(5,6);
return 0;
}
