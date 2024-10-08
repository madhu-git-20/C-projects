
#include<iostream>
using namespace std;
class Circle{  
    public:
    float radius; 
    const float PI=3.14;

    Circle(){      

    }

    Circle(float r){        
        radius=r;
    }
int cirarea(){        
    return PI * radius * radius;
}
int circirum(){        
    return 2 * PI * radius;
}
};
int main(){
    Circle c1(5);
    cout<<c1.cirarea()<<endl;
    cout<<c1.circirum()<<endl;
}