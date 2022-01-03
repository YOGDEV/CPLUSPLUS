#include<iostream>
#include<fstream>

using namespace std;
int main()
{ 
 
/* fstream f;//writing in file
 f.open("hlo.txt",ios::out);
 f<<"hllow bro...\nhow are you..";
 f.close();*/

 fstream f1;//reading from file
 f1.open("hlo.txt",ios::in);
 char data;
 while(!f1.eof()){
 f1>>noskipws>>data;
 cout<<data;}
/* while(!f1.eof()){
 getline(f1,data);
 cout<<data<<endl;}*/
 f1.close();

 fstream f2;//append
 f2.open("hlo.txt",ios::app);
 f2<<"\njai hind\n";
 f2.close();
 while(!f2.eof()){
 f2>>noskipws>>data;
 cout<<data;}

 return 0;
}
