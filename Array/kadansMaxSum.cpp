#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void maxSum(vector<int> &arr)
{

    int sum = INT_MIN;
    int tempSum = 0;
    for (auto i : arr)
    {
        tempSum += i;
        sum = max(sum, tempSum);

        if (tempSum < 0)
        {
            tempSum = 0;
        }
    }

    cout << sum;
};
int main()
{
    vector<int> arr = {2, -3, 2, -9, -23};

    maxSum(arr);

    return 0;
}