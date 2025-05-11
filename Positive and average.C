#include<stdio.h>

int main()
{
    float number, sum = 0;
    int i ,count = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%f", &number);
        
        if(number>0){
            count++;
            sum += number;
        }
    }
    printf("%d valores positivos\n", count);
    
    if(count>0){
        printf("%.1f\n", sum/count);
    }
    
    return 0;
    


}
