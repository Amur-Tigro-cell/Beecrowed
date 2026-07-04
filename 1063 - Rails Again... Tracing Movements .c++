#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        vector<string> in(n), out(n);

        for (int i = 0; i < n; i++)
            cin >> in[i];

        for (int i = 0; i < n; i++)
            cin >> out[i];

        stack<string> st;
        string ans = "";

        int i = 0, j = 0;

        while (j < n) {
            if (!st.empty() && st.top() == out[j]) {
                st.pop();
                ans += 'R';
                j++;
            }
            else if (i < n) {
                st.push(in[i]);
                ans += 'I';
                i++;
            }
            else {
                break;
            }
        }

        if (j == n)
            cout << ans << "\n";
        else
            cout << ans << " Impossible\n";
    }

    return 0;
}
