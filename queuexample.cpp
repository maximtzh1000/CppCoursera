#include <queue>
#include <iostream>
using namespace std;
int main(){
	priority_queue<double> PP;
	PP.push(3.2);
	PP.push(9.8); 
	PP.push(5.4);
	while(!PP.empty()){
		cout<<PP.top()<<" ";
		PP.pop();
	}
	return 0;
}