#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "sau akdf adkdahii aldf ksadhfjkhsk";
    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' '){
            count++;
        }
    }
    
    
    cout<<count;
    return 0;
}