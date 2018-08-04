#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

long long int ans ;

int main()
{
    int n,m,cost;
    cin >> n >> m ;
    int in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
    	cin >> in[i] ;
    }
    sort(in,in+n);
    for(int i = 0 ; i < m ; i++)
    {
    	if(in[i]<0)
    	{
    		ans = ans - in[i];
    	}
    }
    cout << ans << "\n";
} 