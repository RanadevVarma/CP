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

int ref[26];
int ans = 0 ;

int main()
{
    int n,m,k,whites,r,c;
    cin >> n >> m >> k;
    int in[n+2][m+2] = {0};
    FOR(i,1,k+1)
    {
        cin >> r >> c ;
        if(in[r][c]==0)
        {
            in[r][c]=1;
        }
        if((in[r][c+1]==1 && in[r+1][c]==1 && in[r+1][c+1]==1) || (in[r-1][c-1]==1 && in[r-1][c]==1 && in[r][c-1]==1) || (in[r][c-1]==1 && in[r+1][c-1]==1 && in[r+1][c]==1) || (in[r-1][c]==1 && in[r-1][c+1]==1 && in[r][c+1]==1))
        {
            cout << i << "\n";
            return 0 ;
        }
    }
    cout << "0" << "\n";
    return 0 ;
}