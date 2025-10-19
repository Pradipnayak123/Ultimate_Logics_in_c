//Input Two Number by The User And Output A Number Which Is Greater Than anong and Also Find Their Square and Cube;


#include <stdio.h>

int main(){
    int a,b,c;
    int square;
    printf("Enter The Value of a,b and c:\n");
    scanf("%d%d%d",&a, &b, &c);
    if((a>b)&&(a>c)){
        printf("%d is Greater Than %d And %d and their Square is %d\n",a,b,c,a*a);
        
    }
     else if((b>c)&&(b>a)){
        printf("%d is Greater Than %d And %d and their Square is %d\n",b,c,a,b*b);
        
    }
    else if((c>b)&&(c>a)){
        printf("%d is Greater Than %d And %d and their Square is %d\n",c,a,b,c*c);
        
    }
  else if(a=b=c){
    printf("%d , %d And %d are Same\n");
    
  }
    
    return 0;
}