#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    vector<int>p = {125,221,367,15,71};
    vector<int>q;
    int digit = 1;
    for(auto i:p){
        while (i>0)
        {
         digit *= i%10; 
         i/=10;  
        }
        q.push_back(digit);
        digit = 1;
    }
    vector<int>s;
    for(auto i:q){
        int sum = 0;
        while (i>0)
        {
         sum += i%10;
         i/=10;   
        }
        s.push_back(sum);
    }
    
    return 0;
}