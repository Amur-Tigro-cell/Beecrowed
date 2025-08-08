#include <stdio.h>

long long fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    long long a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%lld\n", fib(N));

    return 0;
}
