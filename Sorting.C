#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[min_index]) {
                min_index = j;
            }
        }
     
        if (min_index != i) {
            int temp = A[i];
            A[i] = A[min_index];
            A[min_index] = temp;
        }
    }

   
    for (int i = 0; i < N; i++) {
        printf("%d", A[i]);
        if (i != N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
