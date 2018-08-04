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

int sum ;

int main()
{
	int n,lol;
	cin >> n ;
	int in[3007] = {0} ;
	for(int i = 0 ; i < n ; i++)
	{ 
        cin >> lol ;
        in[lol]++;
	}
	for(int i = 1 ; i <= 3007 ; i++)
	{
		if(in[i]!=1)
		{
			cout << i << "\n";
			return 0 ;
		}
	}
} 