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

long long int ans=0;
 
int main()
{
    int n,lol;
    cin >> n;
    int in[n+1];
    FOR(i,1,n+1)
    {
        cin >> in[i];
    }
    int xors[n+1];
    xors[0]=0;
    FOR(i,1,n+1)
    {
        xors[i] = xors[i-1]^i;
    }
    FOR(i,1,n+1)
    {
        lol=n/i;
        if(lol%2==0)
        {
            ans^=in[i]^xors[n%i];
        }
        else
        {
            ans^=(in[i]^xors[n%i])^xors[i-1];
        }
    }
    cout << ans << "\n";
    return 0;
} 