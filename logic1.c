//Find the Largest among The Three Number;

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d5",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    if ((a>b) && (a>c))     
    {
        printf("%d is largest among %d And %d\n",a,b,c);
        
    }
    else if ((b>a) && (b>c))
    {
       printf("%d is largest among %d And %d\n",b,a,c);
       
    }
    else if ((c>a) && (c>b))
    {
       printf("%d is largest among %d And %d\n",c,a,b);
       
    }
    
    

    return 0;
}
// Then it Will be Work Like a Charm!;