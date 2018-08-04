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

long double fastexp(long double f , long long int t)
{
    long double ans = 1 ;
    while(t>0)
    {
       if(t%2==1)
       ans=(ans*f);
       f=(f*f);
       t/=2;
    }
    return ans;
}

int main()
{
    //Fast Modulo multiplication
    cout << fixed ;
    cout << setprecision(12);
    long long int n,t ;
    cin >> n >> t ;
    long double fac = 1.000000011 ;
    long double mul = fastexp(fac,t);
    cout << mul*(long double)n << "\n";
    return 0;
}