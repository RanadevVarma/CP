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
#include <set>
 
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

int ans;
 
int main()
{
    lol1;
    lol2;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m,a,b;
    cin >> n >> m;
    int check[m+1]={0};
    FOR(i,0,n)
    {
        cin >> a >> b;
        FOR(j,a,b+1)
        {
            check[j]++;
        }
    }
    FOR(i,1,m+1)
    {
        if(check[i]==0)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    FOR(i,1,m+1)
    {
        if(check[i]==0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}