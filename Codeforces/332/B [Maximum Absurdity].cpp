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
#include <set>
 
using namespace std ;
 
#define MOD 1000000007
#define LOD 1000000006
#define pi 3.14159
 
#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)
 
#define FOR(i,a,b)  for(long long int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(long long int i = a ; i > b ; i--)
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int c[200009],dp[200009];

/*bool cmp(pair<long long int,int> a,pair<long long int,int> b)
{
    if(a.fi==b.fi)
    {
        return a.se > b.se;
    }
    else
    {
        return a.fi < b.fi;
    }
}*/
 
int main()
{
    lol1;
    lol2;
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    long long int n,k,i,ans,check=0,lol=0,a=0,b=0;
    cin>>n>>k;
    FOR(i,1,n+1)
    {
        cin>>c[i];
    }
    FOR(i,1,k+1)
    {
        dp[1]+=c[i];
    }
    FOR(i,k+1,n+1)
    {
        dp[i-k+1]=dp[i-k]-c[i-k]+c[i];
    }
    RFOR(i,n-2*k+1,0)
    {
        if(check<=dp[i+k])
        {
            check=dp[i+k];
            b=i+k;
        }
        if(lol<=check+dp[i])
        {
            lol=check+dp[i];
            a=i;
            ans=b;
        }
    }
    cout << a << " " << ans << "\n";
    return 0;
}