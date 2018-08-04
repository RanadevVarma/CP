#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>
#include <stack>
#include <vector>

using namespace std ;

int dp[1000000][10];

int recur(int j)
{
	int check = 1;
	while(j!=0)
	{
		if(j%10!=0)
        {
        	check = check*(j%10);
        }
        j = j/10 ;
	}
	int next = check ;
	if(next<10)
	{
		return next;
	}
	else
	{
		return recur(next);
	}
}
int main()
{
    for(int i = 1 ; i <= 1000000 ; i++)
    {
    	int a = recur(i);
    	dp[i][a] = dp[i-1][a] + 1 ;
    	for(int k = 1 ; k <= 9; k++)
    	{
    	    if(k!=a)
    	    dp[i][k]=dp[i-1][k];
    	}
    }
	int Q ;
	scanf("%d",&Q);
	long long int l,r,k;
	for(int i = 0 ; i < Q ; i++)
	{
        scanf("%lld %lld %lld",&l,&r,&k);
        printf("%d\n",dp[r][k]-dp[l-1][k]);
	}
}