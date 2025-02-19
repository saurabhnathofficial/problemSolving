#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
int main()
{
    int k = 3;
    vector<int>arr = {3,24,2,5,34,42};
    sort(arr.begin(),arr.end());
    
    for(auto i:arr) cout<<i<<" ";
    

    return 0;
}