#include <stdio.h>

int main() {
    int code;
    int alcool = 0, gasolina = 0, diesel = 0;

    while (1) {
        scanf("%d", &code);
        if (code == 4)
            break;
        else if (code == 1)
            alcool++;
        else if (code == 2)
            gasolina++;
        else if (code == 3)
            diesel++;
        
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
