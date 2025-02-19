#include<iostream>
#include<vector>
using namespace std;


bool isPalindrom(int i){
    int original = i;
    int reverse = 0;

    while (i>0){
        reverse = reverse * 10 + (i%10);
        i /= 10;
    }

    if(reverse = original) return true;

return false;
    
    
}
int main()
{
    vector<int>p = {};
    cout<<isPalindrom(214);
    return 0;
}