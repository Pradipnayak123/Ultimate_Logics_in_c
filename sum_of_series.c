#include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter a Number:");
    scanf("%d",&num);
    // 1 - 2 + 3 - 4 + 5 - ......... n;
    // odd numbers --> Add and Even number --> subdtract;
    for (int i = 0; i <= num; i++)
    {
        if (i%2!=0)
        {
            sum = sum + i;
        }
        else {
            sum = sum - i;
        }
        
    }
    printf("The Sum is : %d",sum);
    
    
    
    return 0;
}