#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr = {1,0,3,0,0,0,0,0,0,0,00000,0,0,00,02,7};
    int target = 02;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            cout<<i;
            break;
        }
    }
    return 0;
}