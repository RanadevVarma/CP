// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mod 1000000007

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

int main()
{
    int d1,d2,d3,ans;
    cin >> d1 >> d2 >> d3 ;
    ans = min(2*(d1+d2),d1+d2+d3);
    ans = min(ans,2*(d1+d3));
    ans = min(ans,2*(d2+d3));
    cout << ans <<  "\n" ;
    return 0 ;
}