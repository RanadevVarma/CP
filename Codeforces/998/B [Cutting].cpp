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

int main()
{
    lol1;
    lol2;
    int n,cost,even=0,odd=0;
    cin >> n >> cost;
    vector<int> pos;
    int in[n];
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    FOR(i,0,n-1)
    {
        if(in[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(even==odd && abs(in[i+1]-in[i])<=cost)
        {
            pos.pb(abs(in[i+1]-in[i]));
            even=0;
            odd=0;
        }
    }
    sort(pos.begin(),pos.end());
    int now=0;
    FOR(i,0,pos.size())
    {
        now+=pos[i];
        if(now>cost)
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << pos.size() << "\n";
    return 0;
}