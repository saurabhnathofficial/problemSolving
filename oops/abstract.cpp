#include<iostream>
using namespace std;

class A{
    public:
    virtual void start() = 0;
    void stop(){
        cout<<"stoped \n";
    }
};
class B : public A{
    public:
    void start() override{
        cout<<"Started B\n";
    }
};
class C : public A{
    public:
    void start() override{
        cout<<"Started C";
    }
};
int main()
{
    B b;
    b.start();
    b.stop();
    C c;
    c.start();
    c.stop();
    return 0;
}