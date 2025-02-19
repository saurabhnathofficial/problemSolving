#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "sau akdf adkdahii aldf ksadhfjkhsk";
    s.erase(remove(s.begin(),s.end(),' '),s.end()); // using stl 

    // string res = "";
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if(s[i] != ' ') res += s[i];
    // }
    
    // cout << res;

    cout<<s;

    return 0;
}