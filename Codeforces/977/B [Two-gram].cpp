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
    int len ;
    cin >> len ;
    char in[len] ;
    char out[2] ;
    int ans = 0,tans;
    for(int i = 0 ; i < len ; i++)
    {
        cin >> in[i];
    }
    for(int i = 0 ; i < len-1 ; i++)
    {
        tans = 0 ;
        for(int j = 0 ; j < len-1 ; j++)
        {
            if(i!=j)
            {
                if(in[i]==in[j] && in[i+1]==in[j+1])
                {
                    tans++;
                }
            }
        }
        if(tans>=ans)
        {
            ans = tans ;
            out[0] = in[i];
            out[1] = in[i+1];
        }
    }
    cout << out[0] << out[1] << "\n";
    return 0 ;
}