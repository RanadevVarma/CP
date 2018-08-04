#include<stdio.h>
int min(int a , int b , int c)
{
    if(a<=b && a<=c)
    return a ;
    if(b<=c && b<=a)
    return b ;
    if(c<=a && c<=b)
    return c ;
}
int main()
{
    int n , k , l , c , d , p , nl , np ;
    scanf("%d %d %d %d %d %d %d %d", &n , &k , &l , &c , &d , &p , &nl , &np);
    int z ;
    z = min( (k*l)/(n*nl) , (c*d)/n , p/(np*n) );
    printf("%d",z);
}