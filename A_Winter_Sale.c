#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    float X,P;
    scanf("%f %f",&X,&P);
    float a=100/(100-X);
    printf("%.2f",a*P);
    return 0;
}