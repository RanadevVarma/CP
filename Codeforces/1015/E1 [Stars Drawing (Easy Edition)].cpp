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
#define pi 3.14159
 
#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)
 
#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main()
{
    lol1;
    lol2;
    int n,m;
    cin >> n >> m;
    char in[n+100][m+100];
    int done[n+100][m+100]={0};
    FOR(i,0,n+1)
    {
        FOR(j,0,n+1)
        {
            in[i][j]='0';
        }
    }
    vector <pair<pair<int,int>,int>> place;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            cin >> in[i][j];
        }
    }
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            if(in[i][j]=='*')
            {
                int plus=0;
                while(i+plus+1<=n && i-plus-1>=1 && in[i+plus+1][j]=='*' && in[i-plus-1][j]=='*' && j+plus+1<=m && j-plus-1>=1 && in[i][j+plus+1]=='*' && in[i][j-plus-1]=='*')
                {
                    plus++;
                }
                if(plus>=1)
                {
                    done[i][j]=1;
                    FOR(k,1,plus+1)
                    {
                        done[i+k][j]=1;
                        done[i-k][j]=1;
                        done[i][j-k]=1;
                        done[i][j+k]=1;
                    }
                    place.pb(mp(mp(i,j),plus));
                }
            }
        }
    }
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            if(in[i][j]=='*' && done[i][j]==0)
            {
                cout << "-1" << "\n";
                return 0;
            }
        }
    }
    cout << place.size() << "\n";
    FOR(i,0,place.size())
    {
        cout << place[i].fi.fi << " " << place[i].fi.se << " " << place[i].se << "\n";
    }
}     