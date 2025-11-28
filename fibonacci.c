#include <stdio.h>

int main(){
    int a = 1,b = 1,sum =1;
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    for (int i = 0; i < num-2; i++)
    {
        sum = a +b;
        a = b;
        b = sum;
    }
    printf("The Fibonacci of %d is %d",num,sum);
    
    
    
    
    return 0;
}