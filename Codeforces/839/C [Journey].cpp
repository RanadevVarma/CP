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

vector <int> graph[100009] ;
int vis[100009] ;

long double dfs(int v)
{
    double sol = 0 ;
    int count = 0 ;
    vis[v] = 1 ;
    for(int i = 0 ; i < graph[v].size() ; i++)
    {
        if(vis[graph[v][i]]==0)
        {
            count++;
            sol+=dfs(graph[v][i]);
        }
    }
    if(count==0)
    {
        return 0 ;
    }
    else
    {
        return (sol/(double)(count))+1;
    }
}

int main()
{
    cout << fixed ;
    cout << setprecision(12);
    long long int n,a,b,count=0,ans=0;
    cin >> n ;
    for(int i = 1 ; i < n ; i++)
    {
        cin >> a >> b ;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout << dfs(1) << "\n" ;
    return 0 ;
} 