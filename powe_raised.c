#include <stdio.h>

int main(){
    int power = 1,num, i,num2;
    printf("Enter base :");
    scanf("%d",&num);
    printf("Enter power ::");
    scanf("%d",&num2);
    for (i = 0; i < num; i++)
    {
            power = power *num;
    }
    printf("The Number %d raised to the power of %d is %d",num,num2,power);
    
    
    return 0;
}