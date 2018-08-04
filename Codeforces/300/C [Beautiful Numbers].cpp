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

const int mod = 1000000007 ;

int excellent(int numsum , int a , int b)
{
    int digit ;
    while(numsum!=0)
    {
        digit = numsum%10;
        numsum=numsum/10;
        if(digit!=a && digit!=b)
        {
            return 0 ;
        }
    }
    return 1 ;
}

long long int modularExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)     
        return modularExponentiation((x*x)%mod,n/2);
    else                            
        return (x*modularExponentiation((x*x)%mod,(n-1)/2))%mod;

}

long long int modInverse(long long int A)
{
    return modularExponentiation(A,mod-2);
}

int main()
{
    long long int a,b,n,counta,countb,numsum,ans = 0,inverse;
    cin >> a >> b >> n ;
    long long int fact[n+1] ;
    fact[0] = 1 ;
    fact[1] = 1 ;
    for(int i = 2 ; i <= n ; i++)
    {
        fact[i] = (fact[i-1]*i)%mod ;
    }
    for(int i = 0 ; i <= n ; i++)
    {
        counta = i ;
        countb = n-i ;
        numsum = counta*a + countb*b ;
        if(excellent(numsum,a,b)==1)
        {
            inverse = (modInverse((fact[counta]*fact[countb])%mod))%mod;
            ans += (fact[n]*inverse + mod)%mod;
        }
    }
    cout << ans%mod << "\n";
    return 0 ;
} 