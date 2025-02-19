// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;


// int main()
// {
//     vector<int>p = {125,221,367,15,71};
//     vector<int>q;
//     int digit = 1;
//     for(auto i:p){
//         while (i>0)
//         {
//          digit *= i%10; 
//          i/=10;  
//         }
//         q.push_back(digit);
//         digit = 1;
//     }
//     int min = *min_element(q.begin(),q.end());
//     int max = *max_element(q.begin(),q.end());
//     cout<<min<<" "<<max;
//     int maxIndex,minIndex;
//     for (int i = 0; i < q.size(); i++)
//     {
//         if(q[i]==max) maxIndex = i;
//         else if(q[i]==min) minIndex = i;
//     }

//     cout<<"max : ";
//     cout<<p[maxIndex]<<endl;
//     cout<<"min : ";
//     cout<<p[minIndex];
//     return 0;
// }

// optimal solution

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int arr[] = {123, 456, 73, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minProduct = INT_MAX, result = -1;

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int product = 1;

        // Compute product of digits directly
        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }

        // Update minimum product and result
        if (product < minProduct) {
            minProduct = product;
            result = arr[i];
        }
    }

    cout << result;
    return 0;
}
