#include<iostream>
using namespace std;

class Rectangle{ 
    public:
    int length; 
    int width;

    Rectangle(){  

    }
    
    Rectangle(int l){  
        length=l;
    }
    Rectangle(int l,int w){  
        length=l;
        width=w;
    }
    int getsquarea(){  
         return length*length;
    }
    int getrectarea(){ 
         return length*width;
    }
};
int main(){
    Rectangle r1(20);
    Rectangle r2(20,30);
     
    cout<<r1.getsquarea()<<endl;
    cout<<r2.getrectarea()<<endl;
}