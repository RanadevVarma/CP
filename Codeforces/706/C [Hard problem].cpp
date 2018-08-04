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
    //Method and Complexity for reference - dp , O(n*(avglength of string))
    int n,flag;
    cin >> n ;
    string in[n][2] ;
    int cost[n] ;
    long long int dp[n][2];
    for(int i = 1 ; i < n ; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 0;
    } 
    for(int i = 0 ; i < n ; i++)
    {
        cin >> cost[i];
    }
    dp[0][0] = 0 ;
    dp[0][1] = cost[0] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i][0];
        in[i][1] = in[i][0] ;
        reverse(in[i][1].begin() , in[i][1].end());
    }
    for(int i = 1 ; i < n ; i++)
    {
        dp[i][0] = 10000000000000000 ;
        dp[i][1] = 10000000000000000 ;
        if((in[i][1] < in[i-1][0]) && (in[i][0] < in[i-1][0]) && (in[i][1] < in[i-1][1]) && (in[i][0] < in[i-1][1]))
        {
            cout << "-1" << "\n";
            return 0;
        }
        else
        {
            if(in[i-1][0]<=in[i][0])
            {
                dp[i][0] = min(dp[i][0],dp[i-1][0]);
            }
            if(in[i-1][1]<=in[i][0])
            {
                dp[i][0] = min(dp[i][0],dp[i-1][1]);
            } 
            if(in[i-1][0]<=in[i][1])
            {
                dp[i][1] = min(dp[i][1], dp[i-1][0]+cost[i]);
            }
            if(in[i-1][1]<=in[i][1])
            {
                dp[i][1] = min(dp[i][1], dp[i-1][1]+cost[i]);
            }
        }
    }
    if(min(dp[n-1][0],dp[n-1][1])>=10000000000000000)
    {
        cout << "-1" << "\n";
        return 0;
    } 
    cout << min(dp[n-1][0],dp[n-1][1]) << "\n";
    return 0;
}