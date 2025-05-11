#include <stdio.h>

int main()
{
    double X, Y, Average;

    scanf("%lf %lf", &X, &Y);

    Average = X / Y;

    printf("%.3lf km/l\n", Average);

    return 0;
}
