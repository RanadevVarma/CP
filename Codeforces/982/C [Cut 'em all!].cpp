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

vector <int> graph[100008];
int ans=-1;

int dfs(int c,int p)
{
    int cur=0;
    FOR(v,0,graph[c].size())
    {
        if(graph[c][v]!=p)
        {
            cur+=dfs(graph[c][v],c);
        }
    }
    if(cur%2==1)
    {
        ans++;
    }
    return cur+1;
}

int main()
{
    lol1;
    lol2;
    int n,a,b;
    cin >> n;
    if(n%2==1)
    {
        cout << "-1" << "\n";
        return 0;
    }
    FOR(i,0,n-1)
    {
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    dfs(1,0); 
    cout << ans << "\n";
    return 0;
}