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

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.fi < p2.fi ;
}

int main()
{
    lol1;
    lol2;
    int n,s,e,rmax,ans=0;
    cin >> n;
    vector <pair<int,int>> years ;
    FOR(i,0,n)
    {
        cin >> s >> e ;
        years.pb(mp(s,e));
    }
    sort(years.begin(),years.end(),cmp);
    rmax = years[0].se ;
    FOR(i,1,n)
    {
        if(years[i].se<rmax)
        {
            ans++;
        }
        else
        {
            rmax = years[i].se;
        }
    }
    cout << ans << "\n";
    return 0 ;
}