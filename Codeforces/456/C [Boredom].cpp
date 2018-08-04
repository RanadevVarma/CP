#include<iostream>
#include<string>
#include<cmath>

using namespace std ;
long long int max (long long int a , long long int b)
{
	if(a>b)
		return a ;
	else
		return b ;
}
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int ans[100002];
	long long int in[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d",&in[i]);
	}
	long long int count[100002] = {0};
	for(int i = 0  ;  i <= n-1  ; i++)
	{
	    count[in[i]]++;
	}
	ans[0] = 0 ;
	ans[1] = count[1];
	for(int i = 2 ; i <  100002 ; i++)
	{
	    ans[i] = max(ans[i-1],ans[i-2]+(count[i]*i));
	}
	printf("%lld",ans[100001]);
}
