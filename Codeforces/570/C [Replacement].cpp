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
    int n,q,ans=0,pos;
    cin >> n >> q ;
    char in[n],rep;
    cin >> in ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(in[i]=='.' && in[i+1]=='.')
        {
            ans++;
        }
    }
    while(q--)
    {
        cin >> pos >> rep ;
        pos--;
        if(rep=='.' && in[pos]!='.')
        {
            if(pos>=1)
            {
                if(in[pos-1]=='.')
                {
                    ans++;
                }
            }
            if(pos<n-1)
            {
                if(in[pos+1]=='.')
                {
                    ans++;
                }
            }
        }
        else if(rep!='.' && in[pos]=='.')
        {
            if(pos>=1)
            {
                if(in[pos-1]=='.')
                {
                    ans--;
                }
            }
            if(pos<n-1)
            {
                if(in[pos+1]=='.')
                {
                    ans--;
                }
            }
        }
        in[pos] = rep ;
        cout << ans << "\n";
    }
    return 0 ;
} 


