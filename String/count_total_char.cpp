#include<iostream>
#include<string>

using namespace std;

int main()
{
 
    string s = "sau akdf adkdahii aldf ksk";
    
    int countSpace = 0;
    for(auto i:s){
        if (i == ' ')
        {
            countSpace++;
        }
        
    }
    // cout<<countSpace;
    cout<<s.length() - countSpace;
    return 0;
}