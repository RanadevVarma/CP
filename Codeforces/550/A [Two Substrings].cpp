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
    char in[100007] ;
    cin >> in ;
    int len = strlen(in);
    int ab = len+1, ba = len+1 ;
    for(int i = 0 ; i < len-1 ; i++)
    {
        if(in[i]=='A' && in[i+1]=='B')
        {
            ab = i+2 ;
            break ;
        }
    }
    for(int i = 0 ; i < len-1 ; i++)
    {
        if(in[i]=='B' && in[i+1]=='A')
        {
            ba = i+2 ;
            break ;
        }
    }
    for(int i = ab ; i < len-1 ; i++)
    {
        if(in[i]=='B' && in[i+1]=='A')
        {
            cout << "YES" << "\n";
            return 0 ;
        }
    }
    for(int i = ba ; i < len-1 ; i++)
    {
        if(in[i]=='A' && in[i+1]=='B')
        {
            cout << "YES" << "\n";
            return 0 ;
        }
    }
    cout << "NO" << "\n";
    return 0;
}