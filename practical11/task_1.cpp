//practical no 11...(1.1)
#include<iostream>
using namespace std;
 
class  A{

public:
int x,y;
};

class B: public A{

public:
B(){
x=10;// due to inheritance ....part a
y=20;//
}

void display(){
cout<<x<<" "<<y<<endl;
}
};
int main()
{
B o;//oops
o.display();
o.x=30;//inheritance ... part b
o.y=40;//inheritance
o.display();//oops
}
