
#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;

    return 0;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        stack<char> st;
        string ans = "";

        for (char c : s) {

            if (isalnum(c)) {
                ans += c;
            }
            else if (c == '(') {
                st.push(c);
            }
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }

                if (!st.empty())
                    st.pop();
            }
            else {
                while (!st.empty() && st.top() != '(' &&
                       (precedence(st.top()) > precedence(c) ||
                       (precedence(st.top()) == precedence(c) && c != '^'))) {

                    ans += st.top();
                    st.pop();
                }

                st.push(c);
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        cout << ans << '\n';
    }

    return 0;
}
