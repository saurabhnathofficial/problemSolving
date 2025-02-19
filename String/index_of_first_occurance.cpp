#include<iostream>
#include<string>

using namespace std;
int first_occurance(string target, string s){
    return s.find(target);
}
int main()
{
    string target = "hii";
    string s = "sau akdf adkdahii aldf ksk";
    int res = first_occurance(target,s);
    cout<<res<< " - "<<res+target.length();
    return 0;
}