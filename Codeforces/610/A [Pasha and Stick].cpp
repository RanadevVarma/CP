// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
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

#define MOD 1000000009LL
#define LOD 1000000006
#define pi 3.14159

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int mE(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)       
        return mE((x*x)%MOD,n/2);
    else                     
        return (x*mE((x*x)%MOD,(n-1)/2))%MOD;

}

long long int mI(long long int A)
{
    return mE(A,MOD-2);
}

int main()
{
    lol1;
    lol2;
    long long int n,ways;
    cin >> n;
    if(n%2==1)
    {
        cout << "0" << "\n";
        return 0;
    }
    else
    {
        ways = (((n/2)-1)+1)/2;
        if(n%4==0)
        {
            ways--;
        }
    }
    cout << ways << "\n";
    return 0;
}