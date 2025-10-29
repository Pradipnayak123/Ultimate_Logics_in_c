// chek  In Two Number Which is Greater ?
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter The num1:");
    scanf("%d", &num1);
    printf("Enter The num2:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d is Greater Than %d", num1, num2);
    }
    else
    {
        printf("%d is less Than %d", num1, num2);
    }

    return 0;
}