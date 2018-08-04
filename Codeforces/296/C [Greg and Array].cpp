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
 
int main()
{
    lol1;
    lol2;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int n,m,k,a,b,c;
    cin >> n >> m >> k;
    long long int in[100007];
    long long int add[100007]={0};
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    vector <pair<pair<int,int>,int>> ops;
    long long int tops[100007]={0};
    long long int opscount[100007]={0};
    FOR(i,0,m)
    {
        cin >> a >> b >> c;
        a--;
        b--;
        ops.pb(mp(mp(a,b),c));
    }
    FOR(i,0,k)
    {
        cin >> a >> b;
        a--;
        b--;
        tops[a]++;
        tops[b+1]--;
    }
    long long int sum=0;
    FOR(i,0,m)
    {
        sum+=tops[i];
        opscount[i]=sum;
    }
    FOR(i,0,m)
    {
        add[ops[i].fi.fi]+=(ops[i].se)*opscount[i];
        add[(ops[i].fi.se)+1]-=(ops[i].se)*opscount[i];
    }
    sum=0;
    FOR(i,0,n)
    {
        sum+=add[i];
        cout << in[i]+sum << " ";
    }
    cout << "\n";
    return 0;
} 