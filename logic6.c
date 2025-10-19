// Wheather a Number Is Divisible By 7 and 9;

#include <stdio.h>

int main(){
    int num;
    printf("Enter The Value of num:");
    scanf("%d",&num);
    if ((num%7 == 0) && (num%9 == 0))
    {
        printf("%d  Is Divisible By 7 and 9 respectivelly.\n",num);
        
    }
    else{ printf("%d Is  not Divisible By 7 and 9 respectivelly.\n",num);\
    }
    return 0;
}
// It Will Be Work Like A charm  ...........................;