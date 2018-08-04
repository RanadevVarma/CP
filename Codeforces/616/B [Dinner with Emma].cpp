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

//#define mod 1000000007

using namespace std ;

int main()
{
    int n,m ;
    cin >> n >> m ;
    long long int in[n][m],aindex;
    long long int mi = -1,pmin = 1e10,ans = 1e10;
    for(int i = 0  ; i < n ; i++)
    {
        pmin = 1e10 ;
        for(int j = 0 ; j < m ; j++)
        {
            cin >> in[i][j] ;
            pmin = min(pmin,in[i][j]);
        }
        if(pmin>mi)
        {
            aindex = i ;
            mi = pmin ;
        }
    }
    //cout << aindex << "\n";
    for(int j = 0 ; j < m ; j++)
    {
        ans = min(ans,in[aindex][j]) ;
    }
    cout << ans << "\n";
    return 0 ;
}