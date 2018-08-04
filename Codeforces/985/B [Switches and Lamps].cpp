// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <iterator>
#include <iomanip>

using namespace std ;

int main()
{
    int n,m,count = 0;
    cin >> n >> m ;
    char in[n][m] ;
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    	{
    		cin >> in[i][j];
    	}
    }
    int presum[n+1][m] = {0} ;
    for(int i = 1 ; i <= n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    	{
    		presum[i][j] = presum[i-1][j] + (in[i-1][j] - '0') ;
    	}
    }
    for(int i = 0 ; i < n ; i++)
    {
        count = 0 ;
    	for(int j = 0 ; j < m ; j++)
    	{
    		if(presum[n][j]-presum[i+1][j]+presum[i][j]-presum[0][j]==0)
    		{
    			break ;
    		}
    		else
    		{
                count++;
    		}
    	}
    	if(count==m)
    	{
    		cout << "YES" << "\n";
    		return 0 ;
    	}
    }
    cout << "NO" << "\n";
    return 0 ;
}