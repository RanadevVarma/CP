#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std ;
int max(int  a , int b)
{
	if(a<b)
		return b ;
	else
		return a ;
}
int main()
{
    int n ;
    int zero , one ;
    scanf("%d",&n);
    int in[n];
    int sum = 0 ;
    int value = -1000 ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&in[i]);
        sum = sum + in[i] ;
    }
    for(int i = 0 ; i <= n-1 ; i++)
    {
        for(int j = i ; j <= n-1 ;j++)
        {
            zero = 0 ; one = 0 ;
            for(int k = i ; k <= j ; k++)
            {
                if(in[k]==0)
                zero++ ;
                if(in[k]==1)
                one++;
            }
            int now = zero - one ;
            value = max(value,now);
        }
    }
    printf("%d",sum + value) ;
}
