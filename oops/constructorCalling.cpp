#include<iostream>
using namespace std;

class A{
    public:
    A() {
        cout<<"Class A display none pera"<<endl;
    }
    A(int i) {
        cout<<"Class A display pera"<<endl;
    }
};
class B : public A{
    int i;
    public:
    
    B():A(i) { //constructor calling
        cout<<"Class B display"<<endl;
    }
};
int main()
{
    B b;
    
    
    return 0;
}