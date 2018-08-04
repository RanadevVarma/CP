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

//#define mod 1000000007

using namespace std ;

char in[1000009] ;

int main()
{
    int n ;
    cin >> n ;
    int in[n],ma[n+1],mi[n+2] ;
    ma[0] = -1 ;
    mi[n+1] = 200009 ;
    char pos[n-1] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        ma[i+1] = max(ma[i],in[i]);
        mi[n-i] = min(mi[n-i+1],in[n-i-1]);
    }
    cin >> pos ;
    for(int i = 1 ; i < n ; i++)
    {
        if(ma[i]>mi[i+1] && pos[i-1]=='0')
        {
            cout << "NO" << "\n";
            return 0 ;
        }
    }
    cout << "YES" << "\n";
    return 0 ;
}