#include<iostream>
using namespace std;
template<class T>
class Test{
    private:
    T ans;
    public:
    Test (T n): ans(n){
        cout<<"inside construction"<<endl;
        
    }
    T getNumber(){
        return ans;
    }
};
int main(){
    Test<int> numInt(50);
    Test<double> numDouble(12.5);
    cout<<"integer number is:"<<numInt.getNumber()<<endl;
    cout<<"double number n:"<<numDouble.getNumber()<<endl;
    return 0;
}