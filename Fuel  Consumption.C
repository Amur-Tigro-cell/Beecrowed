#include <stdio.h>

int main() {
    int time, speed;
    scanf("%d", &time);
    scanf("%d", &speed);

    int distance = time * speed;
    double fuel = distance / 12.0;

    printf("%.3lf\n", fuel);

    return 0;
}
