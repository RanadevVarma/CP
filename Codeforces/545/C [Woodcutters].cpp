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
    int n ;
    cin >> n ;
    long long int pos[n+1],height[n],rightmost,ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> pos[i] >> height[i] ;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i==0)
        {
            rightmost = pos[i] ;
            ans++;
        }
        else
        {
            if(pos[i]-height[i]>rightmost)
            {
                ans++;
                rightmost = pos[i];
            }
            else if((pos[i]+height[i]<pos[i+1] || i==n-1) && pos[i]>rightmost)
            {
                ans++;
                rightmost = pos[i] + height[i];
            }
            else
            {
                rightmost = pos[i];
            }
        } 
    }
    cout << ans << "\n";
    return 0 ;
}