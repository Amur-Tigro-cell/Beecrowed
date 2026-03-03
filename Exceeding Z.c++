#include <iostream>
using namespace std;

int main()
    int X, Z;
    cin >> X;

    // Read Z until it is greater than X
    do {
        cin >> Z;
    } while (Z <= X);

    int sum = 0;
    int count = 0;

    // Sum consecutive integers starting from X
    for (int i = X; sum <= Z; i++) {
        sum += i;
        count++;
    }

    cout << count << endl;

    return 0;
}
