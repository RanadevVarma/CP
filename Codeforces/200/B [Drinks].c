#include<stdio.h>
int main ()
{
    int n;
    double r = 0 ;
    scanf("%d",&n) ;
    int d[n] ;
    for( int i = 0 ; i<n ; i++)
    {
        scanf("%d",&d[i]);
    }
    for( int j = 0 ; j<n ; j++)
    {
        r = r + d[j] ;
    }
    r=r/n;
    printf("%f",r) ;
}