#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    if(s[0] >= 'a' && s[0] <= 'z'){
        s[0] -= 32;
    }
    for(int i = 1; i < s.length(); i++){
        if(s[i] != 32 && s[i-1] == 32){ //32 is space
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32;
            }
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        } 
    }
    
    cout<<endl<<s;

    return 0;
}