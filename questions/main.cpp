#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

// Factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Leap year check
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// HCF (GCD) of two numbers
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// LCM of two numbers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// Check if a number is a perfect square
bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

// Check if a number is Armstrong
bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = log10(num) + 1;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

// Convert 12-hour to 24-hour format
string convertTo24Hour(string time) {
    int hh = stoi(time.substr(0, 2));
    string mmss = time.substr(2, 6);
    if (time.substr(8, 2) == "PM" && hh != 12)
        hh += 12;
    if (time.substr(8, 2) == "AM" && hh == 12)
        hh = 0;
    return (hh < 10 ? "0" : "") + to_string(hh) + mmss;
}

// Convert Decimal to Binary/Octal/Hexadecimal
void decimalConversion(int num) {
    cout << "Binary: " << bitset<32>(num) << endl;
    cout << "Octal: " << oct << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
}

// Convert Binary to Decimal
int binaryToDecimal(string binary) {
    return stoi(binary, 0, 2);
}

// Nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// First and last occurrence in sorted array
pair<int, int> findOccurrences(vector<int>& arr, int x) {
    auto first = lower_bound(arr.begin(), arr.end(), x);
    auto last = upper_bound(arr.begin(), arr.end(), x);
    if (first == arr.end() || *first != x) return {-1, -1};
    return {first - arr.begin(), last - arr.begin() - 1};
}

// Distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Segregate 0's and 1's
void segregate(vector<int>& arr) {
    int zeroIndex = 0;
    for (int& num : arr)
        if (num == 0) swap(num, arr[zeroIndex++]);
}

// Count set bits in an integer
int countSetBits(int n) {
    return __builtin_popcount(n);
}

// Find middle element of a linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* findMiddle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Position of rightmost 1 in binary
int rightmostSetBit(int n) {
    return log2(n & -n) + 1;
}

// Position of rightmost different bit
int rightmostDifferentBit(int m, int n) {
    return log2((m ^ n) & -(m ^ n)) + 1;
}

// Find remainder without % operator
int remainder(int a, int b) {
    return a - (a / b) * b;
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Is 2024 a leap year? " << isLeapYear(2024) << endl;
    cout << "GCD of 54 and 24: " << gcd(54, 24) << endl;
    cout << "LCM of 12 and 18: " << lcm(12, 18) << endl;
    cout << "Is 16 a perfect square? " << isPerfectSquare(16) << endl;
    cout << "Is 153 an Armstrong number? " << isArmstrong(153) << endl;
    cout << "24-hour format of 11:45:30PM: " << convertTo24Hour("11:45:30PM") << endl;
    decimalConversion(15);
    cout << "Binary 1010 to decimal: " << binaryToDecimal("1010") << endl;
    cout << "10th Fibonacci number: " << fibonacci(10) << endl;
    vector<int> arr = {1, 2, 2, 2, 3};
    auto [first, last] = findOccurrences(arr, 2);
    cout << "First and last occurrence of 2: " << first << " " << last << endl;
    cout << "Distance between (0,0) and (3,4): " << distance(0, 0, 3, 4) << endl;
    vector<int> binArr = {0, 1, 1, 0, 1};
    segregate(binArr);
    cout << "Segregated array: ";
    for (int num : binArr) cout << num << " ";
    cout << endl;
    cout << "Set bits in 29: " << countSetBits(29) << endl;
    cout << "Rightmost 1 in 18: " << rightmostSetBit(18) << endl;
    cout << "Rightmost different bit in 11, 9: " << rightmostDifferentBit(11, 9) << endl;
    cout << "Remainder of 17/4: " << remainder(17, 4) << endl;
    return 0;
}
