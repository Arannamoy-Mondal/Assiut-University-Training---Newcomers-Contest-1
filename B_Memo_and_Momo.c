#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    long long a1=a,b1=b,k1=k;
    // double a2=log10(a);
    // double b2=log10(b);
    // double k2=log10(k);
    // int a1=a2,b1=b2,k1=k2;
    if(((a1%k1)==0)&&((b1%k1)==0))
    {
        printf("Both");
    }
    else if (((a1%k1)==0)&&((b1%k1)!=0))
    {
        /* code */
        printf("Memo");
    }
    else if (((a1%k1)!=0)&&((b1%k1)==0))
    {
        /* code */
        printf("Momo");
    }
    else
    {
        printf("No One");
    }
    
    
    return 0;
}