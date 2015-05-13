#include <iostream>
#include <fstream>

using namespace std;

class Cstudent{
public:
	char szName[20];
	int nScore;
};

int main(){
	Cstudent s;
	ifstream inFile("students.dat",ios::in|ios::binary);
	if(!inFile){
		cout<<"error"<<endl;
		return 0;
	}
	while(inFile.read((char *)& s,sizeof(s))){
		int nReadBytes=inFile.gcount();
		cout<<s.szName<<" "<<s.score<<endl;
	}
	inFile.close();
	return 0;
}