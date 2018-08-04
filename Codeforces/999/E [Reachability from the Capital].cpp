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

vector <int> graph[5001];
int viscap[5001];
int vis[5001],s;
int marked[5001];

void dfs(int v,int x)
{
    viscap[v]=1;
    if(marked[v]!=s)
    {
        marked[v]=x;
    }
    FOR(i,0,graph[v].size())
    {
        if(viscap[graph[v][i]]==0)
        {
            dfs(graph[v][i],x);
        }
    }
}

int main()
{
    lol1;
    lol2;
    int n,m,a,b;
    cin >> n >> m >> s;
    FOR(i,0,m)
    {
        cin >> a >> b;
        graph[a].pb(b);
    }
    dfs(s,s);
    FOR(i,1,n+1)
    {
        if(i!=s)
        {
            if(marked[i]==0)
            {
                FOR(j,1,n+1)
                {
                    viscap[j]=0;
                }
                dfs(i,i);
            }
        }
    }
    int ans[5001]={0},count=0;
    FOR(i,1,5001)
    {
        ans[marked[i]]++;
    }
    FOR(i,1,5001)
    {
        if(ans[i]>0)
        {
            count++;
        }
    }
    cout << count-1 << "\n";
    return 0 ;
}