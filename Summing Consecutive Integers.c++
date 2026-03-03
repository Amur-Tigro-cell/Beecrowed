#include <iostream>
using namespace std;

int main() {
    int A, N;
    
    cin >> A >> N;

    // Keep reading N until it is positive
    while (N <= 0) {
        cin >> N;
    }

    // Sum of N consecutive integers starting from A
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += (A + i);
    }

    cout << sum << endl;

    return 0;
}
