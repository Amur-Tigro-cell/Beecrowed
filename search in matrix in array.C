#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    int found = 0; 
    for (int i = 0; i < N && !found; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] == X) {
                found = 1;
                break;
            }
        }
    }

    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}
