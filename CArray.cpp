#include <iostream>
using namespace std;

class CArray{
	int size;
	int *ptr;
public:
	CArray(int s=0);
	CArray(CArray& a);
	~CArray();
	void push_back(int v);
	CArray& operator=(const CArray& a);
	int length();
	int& operator[](int i){
		return ptr[i];
	}
};

CArray::CArray(int s):size(s){
	if(s==0) ptr=NULL;
	else ptr=new int[s];
}

CArray::CArray(CArray& a){
	if(!a.ptr){
		ptr=NULL;
		size=0;
		return;
	}
	ptr=new int[a.size];
	memcpy(ptr,a.ptr,sizeof(int)*a.size);
	size=a.size;
}

CArray::~CArray(){
	if(ptr) delete [] ptr;
}

CArray& CArray::operator=(const CArray& a){
	if(ptr==a.ptr) return *this;
	if(!a.ptr){
		if(ptr) delete[] ptr;
		ptr=NULL;
		size=0;
		return *this;
	}
	if(ptr) delete [] ptr;
	ptr=new int[a.size];
	memcpy(ptr,a.ptr,sizeof(int)*a.size);
	size=a.size;
	return *this;
}

void CArray::push_back(int v){
	if(ptr){
		int* tmpPtr=new int[size+1];
		memcpy(tmpPtr,ptr,sizeof(int)*size);
		delete[] ptr;
		ptr=tmpPtr;
	}
	else{
		ptr=new int[1];
	}
	ptr[size++]=v;
}

int CArray::length(){
	return size;
}

int main(){
	CArray a;
	for(int i=0;i<5;i++){
		a.push_back(i);
	}
	CArray a2,a3;
	a2=a;
	for(int i=0;i<a.length();i++)
		cout<<a2[i]<<" ";
	a2=a3;
	cout<<endl;
	a[3]=100;
	CArray a4(a);
	for (int i=0;i<a4.length();i++)
		cout<<a4[i]<<" ";
	cout<<endl;
	return 0;
}