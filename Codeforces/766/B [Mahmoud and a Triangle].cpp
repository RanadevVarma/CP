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

int pos(long long int a,long long int b,long long int c)
{
    if(a+b>c && b+c>a && a+c>b && abs(a-b)<c && abs(a-c)<b && abs(b-c)<a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    lol1;
    lol2;
    int n;
    cin >> n;
    long long int in[n];
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    FOR(i,0,n-2)
    {
        if(pos(in[i],in[i+1],in[i+2]))
        {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
} 