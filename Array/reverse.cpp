#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {4, 1, 7, 3, 8, 5, 389479, 1342};
 
    int s = 0;
    int e = arr.size() - 1;
    while (s<e) 
    {
        swap(arr[s],arr[e]);
        s++; 
        e--;
    }
    
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}