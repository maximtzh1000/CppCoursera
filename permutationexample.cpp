#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	string str="231";
	char szStr[]="324";
	while(next_permutation(str.begin(),str.end())){
		cout<<str<<endl;
	}
	cout<<"****"<<endl;
	while(next_permutation(szStr,szStr+3)){
		cout<<szStr<<endl;
	}
	cout<<"****"<<endl;
	sort(str.begin(),str.end());
	while(next_permutation(str.begin(),str.end())){
		cout<<str<<endl;
	}
	return 0;
}