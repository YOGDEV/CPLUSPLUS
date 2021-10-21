//reverse of string
#include<iostream>
#include<string.h>
using namespace std;//without using predefined function in c++
string rev(string s)
{
string c;
int n=s.length();

for(int i=n-1;i>=0;i--)
c=c+s[i];
return c;
}
int main()
{
string s;
getline(cin,s);
string b=rev(s);
cout<<b<<endl;
return 0;
}

