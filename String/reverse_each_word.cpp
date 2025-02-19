#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "sau akdf adkdahii aldf ksadhfjkhsk";
    string word = "";
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' '){
             word += s[i];
        }
        reverse(word.begin(),word.end());
        res += word;
        word = "";
    }
    
    cout<<res;

    return 0;
}