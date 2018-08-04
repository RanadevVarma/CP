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

int main()
{
    long long int n,fc,sc,tc,mincost=300000001,localcost;
    cin >> n ;
    long long int size[n] ;
    long long int cost[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> size[i] ;
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin >> cost[i] ;
    }
    // First decide the second one.
    for(int i = 1 ; i < n-1 ; i++)
    {
        sc = cost[i] ;
        fc = 1000000000 ;
        tc = 1000000000 ;
        for(int j = 0 ; j < i ; j++)
        {
            if(size[j]<size[i])
            {
                fc = min(fc,cost[j]);
            }
        }
        for(int j = i+1 ; j < n ; j++)
        {
            if(size[j]>size[i])
            {
                tc = min(tc,cost[j]);
            }
        }
        localcost = sc+fc+tc ;
        mincost = min(mincost,localcost);
    }
    if(mincost<=300000000)
    {
        cout << mincost << "\n";
    }
    else
    {
        cout << "-1" << "\n";
    }
    return 0 ;
} 