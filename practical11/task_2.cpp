//practical no 11...(1.2)
#include<iostream>
using namespace std;
 
class  A{

public:
int x,y;
};

class B: public A{

public:
void display(){
cout<<x<<" "<<y<<endl;
}
};  
int main()
{
B o;//oops
o.display();//this will print garbage values..
o.x=30;//inheritance ... part b
o.y=40;//inheritance
o.display();//oops
}
