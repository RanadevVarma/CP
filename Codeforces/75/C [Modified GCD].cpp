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
    long long int a,b,n,Q,l,r;
    cin >> a >> b;
    n=max(a,b);
    vector <int> divisors;
    map <int,int> check;
    for(long long int i=1 ; i*i<=n ; i++)
    {
        int ta=0,tb=0;
        ta=a/i;
        tb=b/i;
        if(a%i==0 && b%i==0)
        {
            if(check[i]==0)
            {
                divisors.pb(i);
                check[i]++;
            }
            if(b%ta==0 && check[ta]==0)
            {
                divisors.pb(ta);
                check[ta]++;
            }
            if(a%tb==0 && check[tb]==0)
            {
                divisors.pb(tb);
                check[tb]++;
            }
        }
        if(a%i==0 && a%ta==0 && b%ta==0 && check[ta]==0)
        {
            divisors.pb(ta);
            check[ta]++;
        }
        if(b%i==0 && a%tb==0 && b%tb==0 && check[tb]==0)
        {
            divisors.pb(tb);
            check[tb]++;
        }
    }
    sort(divisors.begin(),divisors.end());
    //FOR(i,0,divisors.size())
    //{
    //    cout << divisors[i] << " ";
    //}
    //cout << "\n";
    cin >> Q;
    while(Q--)
    {
        cin >> l >> r;
        long long int ans,idx;
        idx = upper_bound(divisors.begin(),divisors.end(),r-1)-divisors.begin();
        ans = divisors[idx];
        if(ans==r && a%ans==0 && b%ans==0 && ans>=l && ans<=r)
        {
            cout << ans << "\n";
        }
        else
        {
            if(idx>0)
            idx--;
            ans = divisors[idx];
            if(a%ans==0 && b%ans==0 && ans>=l)
            {
                cout << ans << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
    }
    return 0;
} 