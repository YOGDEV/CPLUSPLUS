#include <iostream>
using namespace std;

int main()
{
    string str1 , str2 ;
    cout<<"Enter String 1 : ";
    getline(cin,str1) ;
    cout<<"Enter String 2 : ";
    getline(cin,str2) ;
    if(str1==str2)
    {
        cout<<"Entered String are Equal "<<endl ;
    }
    else
    {
        cout<<"Entered String are NOT Equal "<<endl ;
    }
    return 0;
}
