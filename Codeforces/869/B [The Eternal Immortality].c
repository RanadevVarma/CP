#include<stdio.h>
int main()
{
    long long int a , b ;
    scanf("%I64d %I64d",&a,&b);
    long long int z = b - a ;
    long long int temp = 1 ;
    if( z>=5)
    {
        printf("0");
    }
    else
    {
        for( int i = 0 ; i < z ; i++)
        {
            temp = temp * ((b-i)%10) ;
        }
        printf("%I64d",temp%10);
    }
}