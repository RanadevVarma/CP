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
    int n,x,in;
    cin >> n >> x ;
    int tot = n-1 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in ;
        tot = tot + in ;
    }
    if(tot==x)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n"; 
    }
}