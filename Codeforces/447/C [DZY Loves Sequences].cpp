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
    int n,ans=1;
    cin >> n ;
    int in[n+1] = {0} ,l[n+1] = {0} ,r[n+1] = {0} ;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> in[i];
    }
    r[n] = 1 ;
    l[1] = 1 ;
    for(int i = 2 ; i <= n ; i++)
    {
        if(in[i]>in[i-1])
        {
            l[i] = l[i-1]+1;
        }
        else
        {
            l[i] = 1;
        }
    }
    for(int i = n-1 ; i>=1 ; i--)
    {
        if(in[i]<in[i+1])
        {
            r[i] = r[i+1]+1;
        }
        else
        {
            r[i] = 1;
        }
    }
    for(int i = 2 ; i <= n ; i++)
    {
        if(l[i]<n)
        {
            ans = max(ans,l[i]+1);
        }
        else
        {
            ans = max(ans,l[i]);
        }
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(r[i]<n)
        {
            ans = max(ans,r[i]+1);
        }
        else
        {
            ans = max(ans,r[i]);
        }
    }
    for(int i = 2 ; i <= n-1 ; i++)
    {
        //should replace
        if(in[i+1]>=in[i-1]+2)
        {
            ans = max(ans,l[i-1]+r[i+1]+1);
        }
    }
    cout << ans << "\n";
    return 0 ;
} 