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

#define MOD 1000000007
#define pi 3.14159

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int dp[2007][2007];

int main()
{
    lol1;
    lol2;
    long long int n,l;
    cin >> n >> l;
    dp[0][1]=1;
    long long int ans=0;
    FOR(i,1,l+1)
    {
        FOR(j,1,n+1)
        {
            for(int k = j ; k <= n ; k+=j)
            {
                dp[i][k] = (dp[i][k] + dp[i-1][j] + MOD)%MOD;
            }
        }
    }
    FOR(i,1,n+1)
    {
        ans = (ans + dp[l][i] + MOD)%MOD;
    }
    cout << ans << "\n";
    return 0;
}