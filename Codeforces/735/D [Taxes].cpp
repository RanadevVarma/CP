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
#define pi 3.14159

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int dp[2007][2007];

int prime(long long int p)
{
    for(long long int i = 2 ; i*i<=p ; i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    lol1;
    lol2;
    long long int n;
    cin >> n;
    if(prime(n))
    {
        cout << "1" << "\n";
        return 0;
    }
    else if(n%2==0)
    {
        cout << "2" << "\n";
        return 0;
    }
    else
    {
        if(prime(n-2))
        {
            cout << "2" << "\n";
            return 0;
        }
        else
        {
            cout << "3" << "\n";
            return 0;
        }
    }
}