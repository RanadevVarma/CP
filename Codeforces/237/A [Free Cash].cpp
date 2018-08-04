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

int ans = 0 ;

int main()
{
	int n ;
	cin >> n ;
	int h,m ;
	int check[24][60] = {0} ;
    while(n--)
    {
    	cin >> h >> m ;
    	check[h][m]++;
    }
    for(int i = 0 ; i < 24 ; i++)
    {
    	for(int j = 0 ; j < 60 ; j++)
    	{
            ans = max(ans,check[i][j]);
    	}
    }
    cout << ans << "\n";
} 