#include<iostream>
using namespace std;
void getcharh(){
	char a='A';
	cout<<"The value of char is: "<<a<<endl;
	cout<<"SIZE OF CHAR IS: "<<sizeof(a)<<endl;
	}
void getint(){
	int b=456;
	cout<<"The value of int is: "<<b<<endl;
	cout<<"SIZE OF INT IS: "<<sizeof(b)<<endl;
	}
void getfloat(){
	float c=83.56F;
	cout<<"The value of float is: "<<c<<endl;
	cout<<"SIZE OF FLOAT IS: "<<sizeof(c)<<endl;
	}
void getdouble(){
	double d=7485791284.23476348;
	cout<<"The value of double is: "<<d<<endl;
	cout<<"SIZE OF DOUBLE IS: "<<sizeof(d)<<endl;
	}
void getlong(){
	long l=634587684;
	cout<<"The value of long is: "<<l<<endl;
	cout<<"SIZE OF LONG IS: "<<sizeof(l)<<endl;
	}
void getshort(){
	short s=4;
	cout<<"The value of short is: "<<s<<endl;
	cout<<"SIZE OF SHORT IS: "<<sizeof(s)<<endl;
	}
void getlongdouble(){
	long double ld=5433782375.2357893;
	cout<<"The value of long double is: "<<ld<<endl;
	cout<<"SIZE OF LONG DOUBLE IS: "<<sizeof(ld)<<endl;
	}
void getbool(){
	bool ex=20>4;
	cout<<"The value of bool is: "<<ex<<endl;
	cout<<"SIZE OF BOOLEAN IS: "<<sizeof(ex)<<endl;
	}
void getwidechar(){
	wchar_t w=L'#';
	cout<<"The value of wide char is: "<<w<<endl;
	cout<<"SIZE OF WIDE CHAR IS: "<<sizeof(w)<<endl;
	}
void getunsignedint(){
	unsigned int un=347;
	cout<<"The value of unsigned int is: "<<un<<endl;
	cout<<"SIZE OF UNSIGNED INT IS: "<<sizeof(un)<<endl;
	}
void getsignedint(){
	signed int sn=-347;
	cout<<"The value of signed int is: "<<sn<<endl;
	cout<<"SIZE OF SIGNED INT IS: "<<sizeof(sn)<<endl;
	}
int main(){
	getcharh();
	getint();
	getfloat();
	getdouble();
	getlong();
	getshort();
	getlongdouble();
	getbool();
	getwidechar();
	getunsignedint();
	getsignedint();
	return 0;
}
