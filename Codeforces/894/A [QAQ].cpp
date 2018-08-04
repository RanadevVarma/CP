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
    char in[109];
    cin >> in ;
    int len = strlen(in),ans = 0;
    for(int i = 0 ; i < len-2 ; i++)
    {
        for(int j = i+1 ; j < len-1 ; j++)
        {
            for(int k = j+1 ; k < len ; k++)
            {
                if(in[i]=='Q' && in[j]=='A' && in[k]=='Q')
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0 ;
}