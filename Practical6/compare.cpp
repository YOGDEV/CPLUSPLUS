#include<iostream>
#include<string.h>

using namespace std;
int main()
{
string s1;
getline(cin,s1);
string s2;
getline(cin,s2);


int x=s1.compare(s2);
if(x==0)//ASCII valude difference is '0'
cout<<"strings are equal = "<<x;
else if(x>0){
cout<<"string s1 is having more character ..not same STRINGS = ";
cout<<x;}
else{
cout<<"struing s2 is having more no of characters..not same STRINGS = ";
cout<<x;}
return 0;
}

