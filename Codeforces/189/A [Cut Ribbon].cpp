#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std ;
int min(int  a , int b)
{
	if(a<b)
		return a ;
	else
		return b ;
}
int  max(int  a , int b , int c)
{
	if(a>=b && a>=c)
		return a;
	else if(b>=c && b>=a)
		return b ;
	else
		return c ;
}
int main()
{
	int n,a,b,c ;
	int k ;
	scanf("%d %d %d %d",&n,&a,&b,&c);
	int ans = 0 ;
	for(int i = 0 ;  i <= n/a ;  i++)
	{
	    for(int j = 0 ; j <= n/b ; j++)
	    {
	        k = (n - i*a - j*b)/c ;
	        if(k>=0 && (i*a + j*b + k*c == n))
	        {
	            ans = max(ans,i+j+k , 0);
	        }
	    }
	}
	printf("%d",ans);
}
