#include<stdio.h>
#include<string.h>

int main()
{
    long long int n ;
    scanf("%lld",&n);
    int end;
    if(n<=5)
    {
        printf("0");
        return 0;
    }
    if(n%10<=5)
    {
        printf("%lld",n/10);
        printf("0");
    }
    else
    {
        long long int test = n/10 ;
        n = test*10 ;
        n = n+10;
        printf("%lld",n);
    }
    
}