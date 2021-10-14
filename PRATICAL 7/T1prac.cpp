#include<iostream>
using namespace std;
int main(void)
{
int choice;
cout<<"\n1.year \n2.month \n3.day\n4.Exit\nEnter your choice : ";
cin>>choice;
switch(choice)
{
case 1: cout<<"\nYear = 2021";
break;
case 2:cout<<"\nMonth = October";
break;
case 3:cout<<"\nDay = Thursday";
break;
default: cout<<"\n out of range";
break;
}
return 0;
}
