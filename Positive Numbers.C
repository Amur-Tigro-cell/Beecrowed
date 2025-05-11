#include<stdio.h>
int main()
{
    int i, count = 0;
    float number;
    
    for(i = 0; i<6; i++){
        scanf("%f", &number);
        
        if(number>0){
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    
    return 0;
}
