// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
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
#define LOD 1000000006
#define pi 3.14159
 
#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)
 
#define FOR(i,a,b)  for(long long int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(long long int i = a ; i > b ; i--)
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
int main()
{
    lol1;
    lol2;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    cout << fixed;
    cout << setprecision(12);
    int n,w;
    cin >> n >> w;
    int a[n],b[n];
    FOR(i,0,n)
    {
        cin >> a[i];
        if(a[i]<=1)
        {
            cout << "-1" << "\n";
            return 0;
        }
    }
    FOR(i,0,n)
    {
        cin >> b[i];
        if(b[i]<=1)
        {
            cout << "-1" << "\n";
            return 0;
        }
    }
    // Reverse Calculation.
    double tw=w;
    tw += tw/(a[0]-1);
    tw += tw/(b[0]-1);
    RFOR(i,n-1,0)
    {
        tw += tw/(a[i]-1);
        tw += tw/(b[i]-1);
    }
    cout << tw-w << "\n";
    return 0;
} 