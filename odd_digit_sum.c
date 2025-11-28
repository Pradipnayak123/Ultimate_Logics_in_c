#include <stdio.h>

int main(){
    int num,lastdigit,sum = 0;
    printf("Enter a Number :");
    scanf("%d",&num);
    while (num!=0)
    {
        
        lastdigit = num%10;
        if (num%2==0)
        {
            sum = sum + lastdigit;
        }
        num = num/10;
        
    }

    printf("The Sum of All Even Digits is  %d",sum);
    
    
    
    return 0;
}