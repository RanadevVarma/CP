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

using namespace std ;

int main()
{
    long long int q,n;
    cin >> q ;
    while(q--)
    {
        cin >> n ;
        long long int start = 1, subsum = 0 ;
        while(start<=n)
        {
            subsum = subsum + start ;
            start = start*2 ;
        }
        long long int sum = (n*(n+1))/2 - (2*subsum) ;
        cout << sum << "\n";
    }
}