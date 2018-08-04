#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <stdio.h>

#define INF  -1000000009

using namespace std ;

int main()
{
	int n,m,k,inp,same,ans = 0;
    cin >> n >> m >> k ;
    int bit[m+2][n+1] ;
    k = n-k ;
    for(int i = 1 ; i <= m+1 ; i++)
    {
        cin >> inp ;
        for(int j = 1 ; j <= n ; j++)
        {
            bit[i][j] = inp%2 ;
            inp = inp/2;
        }
    }
    for(int i = 1 ; i <= m ; i++)
    {
        same = 0;
        for(int j = 1 ; j <= n ; j++)
        {
            if(bit[i][j]==bit[m+1][j])
            {
                same++;
            }
        }
        if(same>=k)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}