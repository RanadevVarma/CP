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

long long int gcd(long long int a, long long int b)
{
    if (a == 0)
    {    
        return b;
    }
    return gcd(b%a, a);
}

long long int lcm(long long int a, long long int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    lol1;
    lol2;
    long long int n,k;
    cin >> n >> k;
    long long int divisor[n];
    FOR(i,0,n)
    {
        cin >> divisor[i];
    }
    //LCM of divisors should be divisible by k
    long long int cur_lcm=1;
    FOR(i,0,n)
    {
        cur_lcm = lcm(cur_lcm,gcd(divisor[i],k));
    }
    if(cur_lcm==k)
    {
        cout << "Yes" << "\n";
        return 0;
    }
    else
    {
        cout << "No" << "\n";
        return 0;
    }
}