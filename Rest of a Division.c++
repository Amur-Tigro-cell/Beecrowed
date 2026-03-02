#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int start = min(X, Y) + 1; // strictly between
    int end = max(X, Y) - 1;   // strictly between

    for (int i = start; i <= end; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}
