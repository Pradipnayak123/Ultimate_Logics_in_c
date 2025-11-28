 #include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter a Number:");
    scanf("%d",&num);
    // 1 - 2 + 3 - 4 + 5 - ......... n;
    // odd numbers --> Add and Even number --> subdtract;
        if (num%2==0)
        {
            sum = -num/2;//even;
        }
        else {
            sum = -num/2 + num;//odd;
        }
        
    
    printf("The Sum is : %d",sum);
    
    
    
    return 0;
}