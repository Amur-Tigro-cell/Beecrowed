#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        stack<char> st;
        bool ok = true;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                if (st.empty()) {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }

        if (ok && st.empty())
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }

    return 0;
}
