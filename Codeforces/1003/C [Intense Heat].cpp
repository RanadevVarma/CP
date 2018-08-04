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

long long int presums[5010];

int main()
{
    lol1;
    lol2;
    cout << fixed;
    cout << setprecision(12);
    long long int k,n;
    long double ans=0;
    cin >> k >> n;
    long long int temp[k+1];
    FOR(i,1,k+1)
    {
        cin >> temp[i];
    }
    FOR(i,1,k+1)
    {
        presums[i] = presums[i-1]+temp[i];
    }
    FOR(i,1,k+1)
    {
        FOR(j,i+n-1,k+1)
        {
            if((long double)(presums[j]-presums[i-1])/(j-i+1) > ans)
            {
                ans = (long double)(presums[j]-presums[i-1])/(j-i+1) ;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}