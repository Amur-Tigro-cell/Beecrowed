#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int start = h1 * 60 + m1;
    int end   = h2 * 60 + m2;
    int diff  = end - start;

    
    if (diff <= 0) {
        diff += 24 * 60;
    }

    int hours   = diff / 60;
    int minutes = diff % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
    return 0;
}
