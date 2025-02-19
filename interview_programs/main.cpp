#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<y; 
}

int reverse(int x){
    int rev = 0;
    while (x>0){
        rev = rev * 10 + x%10;
        x /= 10;
    }
    return rev;
}

string reverseStr(string str){
    int s = 0;
    int e = str.length() - 1;
    while (s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }

    return str;
}
void fibonocci(int n){
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++)
    {
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }
}

void isPalindrom(int n){
    int original = n;
    int reverse = 0;

    while (n>0)
    {
        reverse = reverse * 10 + n%10;
        n/=10;
    }
    if(original == reverse) cout<<"yes";
    else cout<<"no";
    
}
int main()
{
    // int x = 4;
    // int y = 5;
    // swap(x,y);
    // cout<<reverse(2341234);

    // string str = "kladjfklads";
    // reverse(str.begin(),str.end());
    // cout<<reverseStr(str);


    // fibonocci(10);

    // isPalindrom(1223121);
    return 0;
}