#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a+b)*c==d)
    {
        printf("YES");
    }
    else if (((a-b)*c)==d)
    {
        /* code */
       printf("YES");
    }
    else if (((a*b)+c)==d)
    {
        /* code */
        printf("YES");
    }
    else if (((a*b)-c)==d)
    {
        printf("YES");
        /* code */
    }
    else if(a+(b*c)==d)
    {
        printf("YES");
    }
    else if (a-(b*c)==d)
    {
        printf("YES");
    }
    else if (a-b+c==d)
    {
        /* code */
        printf("YES");
    }
    else if (a+b-c==d)
    {
        /* code */
        printf("YES");
    }
    
    
    else
    {
        printf("NO");
    }

    
    
    
    
    return 0;
}