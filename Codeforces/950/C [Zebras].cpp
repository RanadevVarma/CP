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

int main()
{
    lol1;
    lol2;
    int len,k=0,m=0;
    char in[200007];
    cin >> in;
    len = strlen(in);
    vector<int>done[200007];
    FOR(i,0,len)
    {
        if(in[i] == '0')
        {
            done[++k].push_back(i+1);
        }
        else
        {
            if(k == 0)
            {
                printf("-1\n");
                return 0;
            }
            done[k--].push_back(i+1);
        }
        m = max(m,k);
    }
    if(m!=k)
    {
        cout << "-1" << "\n";
        return 0;
    }
    else
    {
        cout << m << "\n";
        FOR(i,1,m+1)
        {
            cout << done[i].size() << " " ;
            FOR(j,0,done[i].size())
            {
                cout << done[i][j] << " " ;
            }
            cout << "\n";
        }
    }
    return 0;
}