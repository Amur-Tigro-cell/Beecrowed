#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << a; // first number
        } else if (i == 2) {
            cout << " " << b; // second number
        } else {
            int c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }

    cout << endl;
    return 0;
}
