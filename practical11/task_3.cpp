//practical no 11...(3)
#include<iostream>
using namespace std;
 
class  A{
public:
void display(){ cout<<" class A\n";}

};

class B: public A{

public:
void display(){
cout<<" class B\n";
}

};

class C:virtual public A{
public:

void display(){
cout<<" class C\n";}

};


class D: public B,  public C{
public:
void display(){
cout<<" class D\n";}

};

int main()
{

D d;
d.display();
d.display();
d.display();
}
