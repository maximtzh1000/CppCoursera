#include <iostream>
#include <algorithm>
using namespace std;

class MyLess{
public:
	bool operator()(int n1,int n2){
		return (n1%10)<(n2%10);
	}
};

int main(){
	int a[]={14,2,9,111,78};
	sort(a,a+5,MyLess());
	for (int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	sort(a,a+5,greater<int>());
	for (int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

