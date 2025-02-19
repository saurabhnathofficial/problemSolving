#include<iostream>
#include<vector> 

using namespace std;


int main()
{
    //left rotate by one place;
    vector<int> v = {1,2,3,4,5};
    vector<int> temp;
    int n = v.size();
    // int temp = v[0];
    // for(int i = 1; i < n; i++){
    //     v[i-1] = v[i]; 
    // }
    // v[n-1] = temp;

    // int d = 7;
    // d%=n;

    // // left rotate by k times 
    // for(int i = d-1; i < n; i++){
    //     temp.push_back(v[i]);
    // }

    // for(int j = 0; j < d; j++){
    //     temp.push_back(v[j]);
    // }

    // for(auto i:temp) cout<<i<<" ";


    // Roatate array by right to d places 
    int d = 7;
    d%=n;

    for(int i = n-d; i < n; i++){
        temp.push_back(v[i]);
    }
    for(int j = 0; j < n-d; j++){
        temp.push_back(v[j]);
    }

    for(auto i:temp) cout<<i<<" ";
    return 0;
}