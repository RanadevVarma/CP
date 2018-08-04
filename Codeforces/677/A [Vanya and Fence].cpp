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

#define mod 1000000007
 
using namespace std ;

int main()
{
    int n,h,in,ans = 0;
    cin >> n >> h ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in ;
        if(in>h)
        {
            ans = ans + 2 ;
        }
        else
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0 ;
}