#include <iostream>
#include <map>
using namespace std;

template <class Key,class Value>
ostream &operator<<(ostream & os, const pair<Key,Value>& p){
	os<<"("<<p.first<<","<<p.second<<")";
	return os;
}

int main(){
	typedef map<int,double,less<int> > mmid;
	mmid pairs;
	cout<<"1) "<<pairs.count(15)<<endl;
	pairs.insert(mmid::value_type(15,2.7));
	pairs.insert(make_pair(15,99.3));
	cout << "2) " << pairs.count(15) << endl;
	pairs.insert(mmid::value_type(20,9.3));
	mmid::iterator i;
	cout << "3) ";
	for(i=pairs.begin();i!=pairs.end();i++){
		cout<<*i<<",";
	}
	cout<<endl;
}