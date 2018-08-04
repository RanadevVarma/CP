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
	int n,m,in;
	cin >> n >> m ;
	int p1[n] , p2[m] ;
	for(int i = 0 ; i < n ; i++)
	{
		if(i==0)
		{
			cin >> p1[i] ;
		}
		else
		{
            cin >> in ;
            p1[i] = p1[i-1] + in ;
		}
	}
	for(int i = 0 ; i < m ; i++)
	{
		if(i==0)
		{
			cin >> p2[i] ;
		}
		else
		{
            cin >> in ;
            p2[i] = p2[i-1] + in ;
		}
	}
	int a = 0 ;
	int b = 0 ;
	//Two Pointer LOL
	while(a<n && b<m)
	{
		if(p1[a]==p2[b])
		{
			ans++;
			a++;
			b++;
		}
		else
		{
			if(p1[a]>p2[b])
			{
				b++;
			}
			else
			{
				a++;
			}
		}
	}
	cout << ans << "\n";
} 