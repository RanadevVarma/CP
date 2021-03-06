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

long long int lol(long long int n)
{
    return (n*(n+1))/2;
}

int main()
{
    lol1;
    lol2;
    int n;
    cin >> n;
    long long int in[n],sans=n,ans=0;
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    long long int count=1;
    FOR(i,1,n)
    {
        if(in[i]==in[i-1])
        {
            count++;
        }
        else if(count!=1)
        {
            ans+=lol(count);
            sans-=count;
            count=1;
        }
    }
    if(count>1)
    {
        ans+=lol(count);
        sans-=count;
    }
    ans+=sans;
    cout << ans << "\n";
    return 0;
}