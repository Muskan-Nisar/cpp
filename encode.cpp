#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string thedecodedstring(string s) {
    if (s.empty()) {
        cerr << "Error: Input string is empty." << endl;
        return "";
    }

    string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ']') {
            result.push_back(s[i]);
        } else {
            string str = "";

            while (!result.empty() && result.back() != '[') {
                str.push_back(result.back());
                result.pop_back();
            }

            // Handle the case when there is no opening bracket '[' for a closing bracket ']'
            if (result.empty()) {
                cerr << "Error: Unbalanced brackets in the input string." << endl;
                return "";
            }

            // Reverse the str
            reverse(str.begin(), str.end());

            // Remove the last char from result, which is '['
            result.pop_back();

            // Extract the number
            string num = "";
            while (!result.empty() && isdigit(result.back())) {
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin(), num.end());
            int int_num = stoi(num);

            // Insert str in result int_num times
            while (int_num--) {
                result += str;
            }
        }
    }

    return result;
}

int main() {
    string str;
    cin >> str;
    cout << thedecodedstring(str) << endl;

    return 0;
}
