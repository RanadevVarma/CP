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

int main()
{
    lol1;
    lol2;
    int n,sg,ng;
    cin >> n ;
    int in[n] ;
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    ng=1;
    FOR(i,1,n)
    {
        sg = i/ng ;
        if(in[i]<sg)
        {
            ng++;
        }
    }
    cout << ng << "\n";
    return 0 ;
}