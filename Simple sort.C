#include <stdio.h>

int main() {
    int A, B, C;           
    int x, y, z;           

    scanf("%d %d %d", &A, &B, &C);  

    x = A; y = B; z = C;   

    
    int temp;
    if (x > y) { temp = x; x = y; y = temp; }
    if (x > z) { temp = x; x = z; z = temp; }
    if (y > z) { temp = y; y = z; z = temp; }


    printf("%d\n%d\n%d\n\n", x, y, z);


    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
