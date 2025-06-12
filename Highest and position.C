#include <stdio.h>

int main() {
    int x, max = 0, pos = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &x);
        if (x > max) {
            max = x;
            pos = i;
        }
    }

    printf("%d\n%d\n", max, pos);
    return 0;
}
