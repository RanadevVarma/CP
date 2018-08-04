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

#define MOD 1000000007LL

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

vector <int> dist[100007];
vector <int> graph[100007];

bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.fi < b.fi;
}

int main()
{
    lol1;
    lol2;
    long long int n,k,dis,num_assigned=0,temp;
    cin >> n >> k;
    FOR(i,1,n+1)
    {
        cin >> dis;
        dist[dis].pb(i);
    }
    long long int cur_level=0,cursize=k,edges=0,now=0;
    num_assigned++;
    if(dist[0].size()!=1 || dist[1].size()>k)
    {
        cout << "-1" << "\n";
        return 0;
    }
    else
    {
        FOR(j,1,100007)
        {
            if(dist[j].size()>0)
            {
                if(cur_level!=j-1)
                {
                    cout << "-1" << "\n";
                    return 0;
                }
                temp=dist[j].size();
                if(dist[j].size()+dist[cur_level].size()>(dist[cur_level].size())*k && j!=1)
                {
                    cout << "-1" << "\n";
                    return 0;
                }
                else
                {
                        FOR(i,0,dist[j].size())
                        {
                            if(temp<=0)
                            {
                                break;
                            }
                            graph[dist[cur_level][i%dist[cur_level].size()]].pb(dist[j][temp-1]);
                            temp--;
                            edges++;
                        }
                        cur_level=j;
                }
            }
        }
    }
    cout << edges << "\n";
    FOR(i,1,n+1)
    {
        if(graph[i].size()>0)
        {
            FOR(j,0,graph[i].size())
            {
                cout << i << " " << graph[i][j] << "\n";
            }
        }   
    }
    return 0;
}