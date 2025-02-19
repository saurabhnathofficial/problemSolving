#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "enter size";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int n = 5;
    int arr[] = {2,3,45,1,0};
    
    for (int j = 0; j < n; j++)
    {
        while (n > 0)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            n--;
        }
    }
    for (auto i : arr)
    {
        cout << i;
    }

    return 0;
}