#include <stdio.h>

int main()
{
    int a;
    while (1)
    {
        printf("For Break the Loop Please Enter 01!\n");
        
        printf("Please sir Enter a Number:", a);
        scanf("%d", &a);
        if (a == 01)
        {
            break;
        }

        else if (a % 2 == 0)
        {
            printf("%d is an Even Number\n", a);
            continue;
        }
        else
        {
            printf("%d is A Odd Number\n", a);
            continue;
        }
        return 0;
    }
}