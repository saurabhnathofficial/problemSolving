#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int odd = -1;
    string s = "123456789";
    for (auto i : s) {
        int digit = i - '0'; // Convert character to integer
        if (digit % 2 == 1) { // Check if the digit is odd
            if (digit > odd) { // Update if it's the largest odd found
                odd = digit;
            }
        }
    }
    cout << odd;
    return 0;
}