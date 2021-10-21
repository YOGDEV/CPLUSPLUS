// Task 4 to Reverse a string a Manually
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std ;

int main() //Task  4
{
   // Task 4 to Reverse a string a Manually
   string str1  ;
   cout<<"Enter a String : ";
   getline(cin,str1) ;
   string str2 ;
   string :: reverse_iterator rit ;
   for(rit=str1.rbegin(); rit !=str1.rend();rit++) ;
   {
      str2 = str2 + *rit ;
   }
   
   //cout<<"Reverse String is :"<< str2 << endl ;
   cout<<"Reverse String is : " ;
   cout << str2 << endl ;
   return 0 ;

}
