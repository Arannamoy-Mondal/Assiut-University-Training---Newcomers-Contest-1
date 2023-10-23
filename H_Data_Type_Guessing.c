#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    double n,k,a,b;
    scanf("%lf %lf %lf",&n,&k,&a);
    b=(n*k)/a;
    long long x=(n*k)/a;
    double test=b-x;
    int s=sizeof(b);
    if(test>0)
    {
        printf("double");
    }
    else if (b>2147483647)
    {
        printf("long long");
    }
    else
    {
        printf("int");
    }
    
    
    return 0;
}