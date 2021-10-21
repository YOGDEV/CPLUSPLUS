#include<iostream>
#include<string>
using namespace std ;

int main() //Task  1
{
   // Task 1 to use '+' operator  in int + int , string + string , float + float ,string + int 
  int a  , b ;
  string str1   , str2 ;
  float c , d  ;
  cout<<"Enter Two Integers  : ";
  cin>> a >>b ;
  cout<<"Enter Two Float     : ";
  cin>> c >>d ;
  cout<<"Enter  String 1     : ";
  cin>> str1 ;
  cout<<"Enter  String 2     : ";
  cin>> str2 ;
  cout<<"Int + Int       : "<< a+b << endl ;
  cout<<"Float + Float   : "<< c+d << endl ;
  cout<<"String + String : "<< str1+str2 << endl ;
  cout<<"String + Int    : "<< str1+a << endl ;
  /*
  String + Integer gives Error as No match in Operator during run time 
  */
  return 0 ;
}
