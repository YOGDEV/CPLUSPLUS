#include<iostream>
using namespace std;
class Base
{
        public:
        virtual int add(int a,int b)
        {
                return a+b;
        }
        int multi(int a,int b)
        {
                return a*b;
        }
};

class child:public Base
{
        public:
        int add(int a,int b)//writing virtual keyword in front of the fuunction is also ohk!...
        {
                return a+b+1;
        }
};

int main()
{
        child c;
        Base *p;//Base *q,d;
        p=&c;
        //q=&d;
        cout<<p->add(1,2)<<endl;//dynamic binding
        //cout<<q->add(1,2)<<endl;//dynamic binding
        cout<<p->multi(1,2)<<endl;//compile time binding
        
}
