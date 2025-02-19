#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    vector<int>a = {1,1,2,3,4,5};
    vector<int>b = {1,1,2,3,3,3,4,4};
    // brute force approach

//     set<int>s;

//    for(auto i:a) s.insert(i);
//    for(auto i:b) s.insert(i);

//    for(auto i:s) cout<<i<<" ";
    
    //Optimal solutions 

    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int>unionArr;

    while (i<n1 && j<n2)
    {
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            } 
            i++;
        }else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j<n2)
    {
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while (i<n1)
    {
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    
    for(auto i:unionArr) cout<<i<<" ";
    

    return 0; 
}