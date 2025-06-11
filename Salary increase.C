#include <stdio.h>

int main() {
    float s;
    scanf("%f", &s);

    float percent;
    if (s <= 400.00f)         percent = 15.0f;
    else if (s <= 800.00f)    percent = 12.0f;
    else if (s <= 1200.00f)   percent = 10.0f;
    else if (s <= 2000.00f)   percent = 7.0f;
    else                      percent = 4.0f;

    float increase = s * (percent / 100.0f);
    float new_salary = s + increase;

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", increase);
    printf("Em percentual: %.0f %%\n", percent);

    return 0;
}
