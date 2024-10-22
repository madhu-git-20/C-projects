// write a c++ progarm for hierarchical inheritance

#include<iostream>
using namespace std;

class person{
    char name[30];
    public:
    void read(){
        cout<<"enter name:";
        cin>>name;
    }
    void display (){
        cout<<"name:"<<name<<endl;
    }
};
class sport:public person{
    int m;
    public:
    void display(){
        cout<<m;
        person::display();
    }
};
class student:public person{
    public:
    void display(){
        person::display();
    }
};
int main(){
    sport sp;
    student st;
    sp.read();
    st.read();
    sp.display();
    st.display();
    return 0;
}