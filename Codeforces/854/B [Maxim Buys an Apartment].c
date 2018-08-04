#include<stdio.h>
int main()
{
    int n ;
    int k ;
    scanf("%d %d",&n,&k) ;
    int min , max ;
    if(n==k || k==0)
    min = 0 ;
    else
    min = 1 ;
    if(k>=n/3)
    max = n-k ;
    if(k==0)
    max = 0 ;
    else if(k<=n/3)
    max = 2*k ;
    printf("%d %d",min,max);
}