#include <stdio.h>

int main(){
    int num,sum = 0,lastdigit;
    printf("Enter a Number:");
    scanf("%d",&num);
    while (num!=0)
    {

       lastdigit = num%10;
       sum = sum + lastdigit;
       num = num/10;
       
    }
    printf("The Addition of All digits is %d ",sum);
    
    
    
    return 0;
}