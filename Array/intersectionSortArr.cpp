#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    vector<int>a = {1,1,2,3,4,5};
    vector<int>b = {1,1,2,3,3,3,4,4};
    int n1 = a.size();
    int n2 = b.size();
    int vis[n2] = {0};
    vector<int>ans;
    for(int i = 0; i < a.size(); i++){

        for(int j = 0; j < b.size(); j++){

            if(a[i] == b[i] && vis[j] == 0 ){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i])break;
        }
    }


    for(auto i:ans)cout<<i<<" ";

    return 0;
}