#include <iostream>
#include <string>

using namespace std;

string remove_junk(string s) {
    string res = "";
    for (char i : s) {
         
        if ((int(i) >= 65 && int(i) <= 90) || (int(i) >= 97 && int(i) <= 122) || i == ' ') {
            res += i;
        }
    }
    return res;
}

int main() {
    string s;
    cout << "Enter your string: ";
    getline(cin, s);
    string n = remove_junk(s);
    cout << "Your string is: " << n << endl;

    return 0;
}
