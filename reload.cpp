#include <iostream>
#include <cstdlib>
using namespace std;

class Complex{
private:
	double real;
	double img;
public:
	Complex(double r=0.0,double m=0.0):real(r),img(m){}
	Complex operator+(const Complex &);
	Complex operator-(const Complex &);
	friend ostream & operator<<(ostream& os, const Complex& c);
	void printinfo();
};

Complex Complex::operator+(const Complex& c){
	return Complex(real+c.real,img+c.img);
}

Complex Complex::operator-(const Complex& c){
	return Complex(real-c.real,img-c.img);
}

void Complex::printinfo(){
	cout<<real<<"+"<<img<<"i"<<endl;
}

ostream& operator<<(ostream& os,const Complex& c){
	os<<c.real<<"+"<<c.img<<"i";
	return os;
}


int main(){
	Complex x,y(4.3,8.2),z(3.3,1.1);
	x=y+z;
	cout<<x<<endl;
	x=y-z;
	cout<<x<<endl;
	return 0;
}
