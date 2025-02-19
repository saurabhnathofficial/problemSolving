#include <iostream>
#include <vector>

using namespace std;
int main(){
    string str = "saurab-293 ";
    int num = 0;
    int neg = 0;
    int pos = 0;
    for(auto i:str){
        if(i >= 48 && i <= 57){
            num = num*10+(i-'0');
        }
        if(i == '-'){
            neg = 1;
            pos = 0;
        }else if(i == '+'){
            pos = 1;
            neg = 0;
        }
    }
    if(neg){
        num = -num;
    }else if(pos){
        num = num;
    }
    cout<<num;

    return 0;
}
