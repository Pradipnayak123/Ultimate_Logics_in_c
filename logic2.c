 #include <stdio.h>
 
 int main(){
    int n;
    int f = 0;
    printf("Enter The Value of a:",n);
    scanf("%d",&n);
    if (n<2)    
    {
        printf("%d is Not a Prime Number\n",n);
    }
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i == 0)
        {
           printf("%d is Not a Prime Number\n",n);
           f = 1;
           break;
        }
    }
    if (f == 0)
    {
      printf("%d is a Prime Number \n",n);
      
    }
    
   
    
    return 0;
 }