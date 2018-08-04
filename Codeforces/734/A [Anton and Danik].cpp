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
    int n;
    cin >> n ;
    int dp[n+1][2] = {0} ;
    char in[n] ;
    cin >> in ;
    for(int i = 0 ; i < n ; i++)
    {
        if(in[i]=='A')
        {
            dp[i+1][0] = dp[i][0] + 1 ;
            dp[i+1][1] = dp[i][1] ;
        }
        else
        {
            dp[i+1][1] = dp[i][1] + 1 ;
            dp[i+1][0] = dp[i][0] ;
        }
    }
    if(dp[n][0]>dp[n][1])
    {
        cout << "Anton" << "\n";
    }
    else if(dp[n][1]>dp[n][0])
    {
        cout << "Danik" << "\n";
    }
    else
    {
        cout << "Friendship" << "\n";
    }
    return 0 ;
}