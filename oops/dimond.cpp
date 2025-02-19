#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"i'm class A \n";
    }
};
class B : virtual public A{
    public:
    B(){
        cout<<"i'm class B \n";
    }
};
class C : virtual public A{
    public:
    C(){
        cout<<"i'm class C \n";
    }
};
class D : public C, public B{
    public:
    D(){
        cout<<"i'm class D \n";
    }
};


int main()
{
    D d;
    return 0;
}