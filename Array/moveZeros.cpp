#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr = {1,0,3,0,0,0,0,0,0,0,00000,0,0,00,02,7};
    // vector<int>temp;
    int e = arr.size();
    
    // for(int i = 0; i < e; i++){
    //     if(arr[i] != 0) temp.push_back(arr[i]);
    // }
    // int ts = temp.size();

    // e-=ts;
    // for(int i = 0; i < e; i++){
    //     temp.push_back(0);
    // }
    // for(auto i:temp) cout<<i<<" ";

    // optimal solutions 
    int j = -1;
    for(int i = 0; i < e; i++){
        if(arr[i]==0){
            j = i;
            break;
        } 
    } 
    for(int i = j+1; i < e; i++){
        if(arr[i] != arr[j]){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(auto i:arr) cout<<i<<" ";

    return 0;
}