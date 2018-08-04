#include<stdio.h>
int gcd(int a , int b)
{
    while(1)
   {
        int p = b%a ;
        if(p==0)
        return a ;
        else
    {
        b = a;
        a = p;
    }}
    
}

int main() {
    int n ;
    scanf("%d",&n);
    int test ;
    int b ;
    for( int a = n/2; a>0 ; a--)
    {
       b = n - a ;
       if(gcd(a,b)==1)
       {
           test = a ;
           break ;
       }
       
    }
    printf("%d %d",test , n - test);
    
}