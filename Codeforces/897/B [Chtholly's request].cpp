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

int ndig(int i)
{
    int len=0;
    while(i)
    {
        len++;
        i/=10;
    }
    return len;
}

long long int rfunc(int i,int dig)
{
    long long int sol=0;
    int cur_digit;
    while(i)
    { 
        cur_digit = i%10;
        sol = sol+(cur_digit*(int)pow(10,dig-1));
        dig--;
        i/=10;
    }
    return sol;
}

int main()
{
    lol1;
    lol2;
    long long int k,p,dig,ans=0,rvalue;
    cin >> k >> p;
    FOR(i,1,k+1)
    {
        dig = ndig(i);
        ans = (ans+(i*(long long int)pow(10,dig))+p)%p;
        rvalue = rfunc(i,dig);
        ans = (ans+rvalue+p)%p;
    }
    cout << ans << "\n";
    return 0;
}