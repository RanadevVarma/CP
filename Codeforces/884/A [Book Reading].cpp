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
    int n,t,ans = 0,in;
    cin >> n >> t ;
    while(n-- && t>0)
    {
        cin >> in ;
        in = 86400 - in ;
        t = t - in ;
        ans++;
    }
    cout << ans << "\n";
}