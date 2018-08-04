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

int ans ;

int main()
{
	int n,s,t ;
	cin >> n >> s >>t ;
	int in[n+1];
	int now = s ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> in[i];
	}
	if(s==t)
	{
		cout << "0" << "\n";
		return 0;
	}
    for(int j = 0 ; j <= n ; j++)
    {
        now = in[now] ;
        ans++;
        if(now==t)
        {
        	cout << ans << "\n";
        	return 0 ;
        }
    }
    cout << "-1" << "\n";
} 