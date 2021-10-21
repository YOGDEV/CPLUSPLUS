
#include<bits/stdc++.h>
#include<iostream>
#include<string>
// Task 6 String is Mutable or Not
using namespace std ;

int main() //Task 6
{
  string str ;
  str = "HELLO" ;
  cout<<"The String is Before : " << str << endl;
  cout<<"The Address of String Before : "<< &str  << endl;
  str[0] = 'J' ;
  cout<<"The String is After : " << str << endl;
  cout<<"The Address of String After : "<< &str <<  endl;
  cout<<"!!! The Address of String Before & After is Same So Strings are Mutable !!!"<< endl;
  return 0 ;
}
