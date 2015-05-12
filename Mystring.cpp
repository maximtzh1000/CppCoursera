#include <iostream>
using namespace std;

class String{
private:
	char* str;
public:
	String():str(NULL){}
	const char* c_str(){return str;}
	char* operator=(const char*s);
	String& operator=(const String& s);
	~String();
};

char* String::operator=(const char*s){
	if(str) delete[] str;
	if(s){
		str=new char[strlen(s)+1];
		strcpy(str,s);
	}
	else{
		str=NULL;
	}
	return str;
}

String& String::operator=(const String& s){
	if (str==s.str) return *this;
	if(str) delete[] str;
	str=new char[strlen(s.str)+1];
	strcpy(str,s.str);
	return *this;
}

String::~String(){
	if(str) delete[] str;
}

int main(){
	String s;
	s="Good luck.";
	cout<<s.c_str()<<endl;
	s="Shenzhou!";
	cout<<s.c_str()<<endl;
	String s1,s2;
	s1="this";
	s2="that";
	s1=s2;
	cout<<s2.c_str()<<endl;
	return 0;
}

