#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Cstudent{
public:
	char szName[20];
	int nScore;
};

int main(){
	Cstudent s;
	ofstream OutFile("students.dat",ios::out|ios::binary);
	while(cin>>s.szName>>s.nScore){
		if(strcmp(s.szName,"exit")==0)
			break;
		else{
			OutFile.write((char*)&s,sizeof(s));
		}
	}
	OutFile.close();
	return 0;
}