#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>p = {2,9,3,6,5};
    vector<int>q;
    for (int i = 0; i < p.size()-1; i++)
    {
        int num;
        num = p[i]+p[i+1];
        
        q.push_back(num);

    }
    int sum = 0;
    for(auto i:q){
        sum+=i%10;
    }
    cout<<sum;
    
    return 0;
}