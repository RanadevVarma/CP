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

map<string,string>out;
map<string,string>::iterator it;

int main()
{
    lol1;
    lol2;
    int n,m,wall=0,twall=0;
    cin >> n >> m;
    int rwalls[n],cwalls[m];
    char in[n][m];
    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            cin >> in[i][j];
            if(in[i][j]=='*')
            {
                wall++;
            }
        }
    }
    FOR(i,0,n)
    {
        twall=0;
        FOR(j,0,m)
        {
            if(in[i][j]=='*')
            {
                twall++;
            }
        }
        rwalls[i]=twall;
    }
    FOR(i,0,m)
    {
        twall=0;
        FOR(j,0,n)
        {
            if(in[j][i]=='*')
            {
                twall++;
            }
        }
        cwalls[i]=twall;
    }
    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            twall=rwalls[i]+cwalls[j];
            if(in[i][j]=='*')
            {
                twall--;
            }
            if(twall==wall)
            {
                cout << "YES" << "\n";
                cout << i+1 << " " << j+1 << "\n";
                return 0;
            }
        }
    }
    cout << "NO" << "\n";
    return 0;
}