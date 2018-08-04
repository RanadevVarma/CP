#include<iostream>
#include<string>
#include<cmath>

using namespace std ;
int max (int a , int b)
{
	if(a>b)
		return a ;
	else
		return b ;
}
int main()
{
	int n ;
	scanf("%d",&n);
	long long int in[n];
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%lld",&in[i]);
	}
	int k = 1;
	int ans = 1 ;
	for(int i = 0 ; i < n-1; i++)
	{
		if(in[i+1]>=in[i])
		{
			k++;
			ans = max(ans,k);
		}
		else
		{
		    k = 1 ;
		}
	}
	printf("%d",ans);
}
