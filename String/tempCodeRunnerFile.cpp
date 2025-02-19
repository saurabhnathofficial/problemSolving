#include<iostream>
#include<string>

using namespace std;

int main()
{
 
    string s = "sau akdf adkdahii aldf ksk";
    int count = 0;
    for(auto i:s){
        count++;
    }
    cout<<count;
    cout<<s.length();
    return 0;