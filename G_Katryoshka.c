#include<stdio.h>

int main()
{
    long long e,m,b,t=0,min;
    scanf("%lld %lld %lld",&e,&m,&b);
    if((e<m)&&(e<b)){
        
        min=e;
    }
    else if ((m<e)&&(m<b))
    {
      
       min=m;

    }
    else if ((b<e)&&(b<m))
    {
       
        min=b;
    }
    t=t+min;
    e=e-min;
    m=m-min;
    b=b-min;
    if((e/2)<b){
        min=e/2;
    }
    else{
        min=b;
    }
    t=t+min;
    printf("%lld",t);

    
    
    
    
}