#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        stack<char> st;
        int diamonds = 0;

        for (char c : s) {
            if (c == '<') {
                st.push(c);
            } else if (c == '>') {
                if (!st.empty()) {
                    st.pop();
                    diamonds++;
                }
            }
        }

        cout << diamonds << "\n";
    }

    return 0;
}
