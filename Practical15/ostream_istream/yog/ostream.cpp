/*
Write a Program to read and write from ant to a file using "ostream" & "ifstream"...
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
 
/* ofstream f;
 f.open("hlo.txt");
 f<<"hllow bro\n";
 f.close();*/

 ifstream f1;
 f1.open("hlo.txt");
 string data;
 getline(f1,data);
 cout<<data<<endl;
 f1.close();
 return 0;
}
