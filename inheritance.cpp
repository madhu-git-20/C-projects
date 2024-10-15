// write a c++ programme using multiple inheritance 

#include <iostream>
using namespace std;
class person{
    char name[30];
public:
void read (){
    cout<<"enter name"<<endl;
    cin>>name;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        
    }
};
class sport{
    int m=50;
    public:
    void display(){
        cout<<m;
    }
};
class student: public person,public sport{
    public:
    void display(){
        person::display();
        sport::display();
    }
};
int main(){
    student st;
    st.read();
    st.display();
    return 0;
}
