// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
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

long long int modularExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%MOD,n/2);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%MOD,(n-1)/2))%MOD;

}

int main()
{
    lol1;
    lol2;
    long long int x,k ;
    cin >> x >> k ;
    if(x==0)
    {
        cout << "0" << "\n";
        return 0 ;
    }
    if(k==0)
    {
        cout << (x*2)%MOD << "\n";
        return 0 ;
    }
    // for first k months a becomes a*2 - 0.5
    // After k moves
    cout << (((x%MOD)*modularExponentiation(2,k+1))%MOD-modularExponentiation(2,k)+1+MOD)%MOD << "\n";
    return 0 ;
}