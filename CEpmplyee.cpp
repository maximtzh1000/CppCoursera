#include <iostream>
using namespace std;

class CEmployee{
private:
    char szName[30];
public:
    int salary;
    void setName(char *name);
    void getName();
    void averageSalary(CEmployee e1,CEmployee e2);
};

void CEmployee::setName(char *name){
    strcpy(szName,name);
}

void CEmployee::getName(){
    cout<<szName<<endl;
}

void CEmployee::averageSalary(CEmployee e1,CEmployee e2){
    salary=(e1.salary+e2.salary)/2;
}

int main(){
    CEmployee e;
    e.setName("Tom");
    e.salary=5000;
    
    e.getName();
    return 0;
}