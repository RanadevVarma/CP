#include<iostream>
using namespace std ;
int main()
{
    long long int n,m,a ;
    scanf("%lld %lld %lld",&n,&m,&a);
    printf("%lld",((n+a-1)/a)*((m+a-1)/a));
}