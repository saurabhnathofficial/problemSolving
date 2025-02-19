#include<iostream>
using namespace std;

int main()
{
    string s = "sau akdf adkdahii aldf ksadhfjkhsk";
    int count = 0;
    for (int i = s.length() - 1; i > 0 ; i--)
    {
        if(s[i] == ' ')break;
        else count++;
    }
 
    cout<<count;
    return 0;
}