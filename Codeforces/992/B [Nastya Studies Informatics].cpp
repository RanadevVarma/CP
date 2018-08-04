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

bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.fi < b.fi ;
}

long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a, b);
}

int main()
{
    lol1;
    lol2;
    long long int l,r,x,y,ans=0,c;
    cin >> l >> r >> x >> y ;
    // x is gcd y is lcm
    if(y%x!=0)
    {
        cout << "0" << "\n";
        return 0 ;
    }
    else
    {
        c = y/x ;
        for(long long int i = 1 ; i*i<=c ; i++)
        {
            if(c%i==0)
            {
                if(gcd(i,c/i)==1 && i*x>=l && x*(c/i)<=r)
                {
                    if(i==(c/i))
                    {
                        ans++;
                    }
                    else
                    {
                        ans+=2;
                    }
                }
            }
        }
        cout << ans << "\n";
        return 0 ;
    }
}