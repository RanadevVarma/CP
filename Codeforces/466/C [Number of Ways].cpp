#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <cstring>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
#include <stdio.h>

using namespace std ;

long long int sum,ans,cou;

int main()
{
	int n ;
	cin >> n ;
	int in[n] ;
	long long int presum[n+1] = {0} ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i];
		sum = sum + in[i];
	}
	for(int i = 1 ; i <= n ; i++)
	{
        presum[i] = presum[i-1] + in[i-1] ;
	}
    if(sum%3!=0)
    {
    	cout << "0" << "\n";
    	return 0 ;
    }
    else
    {
    	long long int fp = sum/3 ;
    	long long int sp = 2*sum/3 ;
    	for(int i = 1 ; i < n ; i++)
    	{
    		if(presum[i]==sp)
    		{
    			ans = ans + cou ;
    		}
    		if(presum[i]==fp)
    		{
    			cou++;
    		}
    	}
    	cout << ans << "\n";
    }
}