#include<iostream>
using namespace std;

bool pallindrome(string s)
{
int len=s.length();
for(int i=0;i<len/2;i++)
{
if(s[i]!=s[len-1-i])
return false;
}
return true;
}

int main()
{
string str;
getline(cin,str);

bool ans=pallindrome(str);
if( ans==1)
cout<<"\n pallindrome\n";
else
cout<<"\n not pallindrome\n";
return 0;
}
