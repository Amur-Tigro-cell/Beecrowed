#include <stdio.h>

int main() {
    int X, Y;
    double total = 0.0;

    // Read product code and quantity
    scanf("%d %d", &X, &Y);

    // Determine price by code
    if (X == 1)       total = 4.00 * Y;
    else if (X == 2)  total = 4.50 * Y;
    else if (X == 3)  total = 5.00 * Y;
    else if (X == 4)  total = 2.00 * Y;
    else if (X == 5)  total = 1.50 * Y;

    // Output with correct formatting
    printf("Total: R$ %.2f\n", total);

    return 0;
}
