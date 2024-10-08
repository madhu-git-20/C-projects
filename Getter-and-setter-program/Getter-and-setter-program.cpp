#include<iostream>
using namespace std;

class Employee{ 
    private:
    int salary;  

    public:
    void setsalary(int s){ 
          salary = s;
    }
    int getsalary(){   
        return (salary);
    }};
    int main(){
        Employee E1;
        E1.setsalary(50000);
        cout<<E1.getsalary()<<endl;
        return 0;
    }