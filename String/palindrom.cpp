#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter string : ";
    cin>>s;
    int end = s.length() - 1;
    int start = 0;
    int flag = 0;
    while (start<end)
    {
        if (s[start]!=s[end])
        {
           flag = 1;
        }

        start++;
        end--;
    }
    if(flag){
        cout<<"not a palindrom";
    }else{
        cout<<" palindrom ";
    }
    
    return 0;
}