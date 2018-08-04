#include<stdio.h>
#include<math.h>
long long int max(long long int a , long long int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    long long int n,k ;
    scanf("%lld %lld",&n,&k);
    long long int ans ;
    int eff ;
    for(int i = 0 ; i < 200 ; i++)
    {
        if(pow(2,i)<=n && pow(2,i+1)>n)
        {
            eff = i;
            break;
        }
    }
    if(k==1)
    {
        printf("%lld",n);
        return 0;
    }
    else
    {
        long long int low = 1;
        long long int ans = 1;
        for(long long int i = 0 ; i < eff ; i++)
        {
            long long next = low*2 ;
            ans = ans^next ;
            low = low*2;
        }
        printf("%lld",max(ans,n));
    }
}