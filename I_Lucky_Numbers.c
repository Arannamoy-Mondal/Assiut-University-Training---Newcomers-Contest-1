#include<stdio.h>
int main()
{
    int a,b,n1;
    scanf("%d",&n1);
    a=n1/10;
    b=n1%10;
    if((b%a)==0){
      printf("YES");
    }
      
    else if ((a%b)==0)
    {
        printf("YES");
    }
    else{
       printf("NO");
    }   
    
}