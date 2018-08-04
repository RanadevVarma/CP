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

int vis[1001][11][11];
int steps[1001];

int pos(int step, int diff, int lu, int n, char in[])
{
    if(step!=0 && (diff<=0 || diff>10))
    {
        return 0 ;
    }
    else if(step==n)
    {
        cout << "YES" << "\n";
        FOR(i,0,n)
        {
            cout << steps[i] << " " ;
        }
        cout << "\n";
        return 1 ;
    }
    if(vis[step][diff][lu]==1)
    {
        return 0 ;
    }
    else
    {
        vis[step][diff][lu]=1;
    }
    FOR(i,0,10)
    {
        if(in[i]=='1' && i!=lu)
        {
            steps[step] = i+1 ;
            if(pos(step+1,i-diff+1,i,n,in)==1)
            {
                return 1 ;
            }
        }
    }
    return 0 ;
}

int main()
{
    lol1;
    lol2;
    int n ;
    char in[11] ;
    cin >> in ;
    cin >> n ;
    if(pos(0,0,10,n,in)==0)
    {
        cout << "NO" << "\n";
        return 0 ;
    }
}