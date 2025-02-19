#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"helo i am A \n";
    }
};
class B: virtual public A{
    public:
    B(){
        cout<<"helo i am B \n";
    }
};
class C:virtual public A{
    public:
    C(){
        cout<<"helo i am C \n";
    }
};
class D:public C,public B{
    public:
    D(){
        cout<<"helo i am D \n";
    }
};

int main()
{
    D d;
    return 0;
}