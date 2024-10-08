#include<iostream>
using namespace std; 
class person { 
    public:
    char name[30];
    int age;

};

class student:private person {
    public:
    void display() {
         cout<<"studentName" <<name<<endl;
         cout<<"studentAge"<<age<<endl;

    }
    void setter () { 
        cout<<"enterName"<<endl;
        cin>>name;
        cout<<"enterAge"<<endl;
        cin>>age;

    }
};
int main () { 
    student st;
    st.setter();
    st.display();
    return 0; 
}
