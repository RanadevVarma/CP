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
    int n,m ;
    cin >> n >> m ;
    string in[m][2] , lol ;
    int lookup[m];
    for(int i = 0 ; i < m ; i++)
    {
        cin >> in[i][0] >> in[i][1] ;
        if(in[i][1].size()<in[i][0].size())
        {
            lookup[i] = 1 ;
        }
        else
        {
            lookup[i] = 0 ;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin >> lol ;
        for(int j = 0 ; j < m ; j++)
        {
            if(lol==in[j][0] || lol==in[j][1])
            {
                cout << in[j][lookup[j]] << " " ;
                break ;
            }
        }
    }
    cout << "\n";
    return 0 ;
}