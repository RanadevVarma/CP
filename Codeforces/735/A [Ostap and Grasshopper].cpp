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
    int n,k,pos,target,tpos;
    cin >> n >> k ;
    char in[n];
    cin >> in ;
    for(int i = 0 ; i < n ; i++)
    {
        if(in[i]=='G')
        {
            pos = i ;
        }
        if(in[i]=='T')
        {
            target = i ;
        }
    }
    tpos = pos;
    if(target>tpos)
    {
        while(tpos<target && tpos+k<n)
        {
            tpos = tpos + k ;
            if(in[tpos]=='T')
            {
                cout << "YES" << "\n";
                return 0 ;
            }
            if(in[tpos]=='#')
            {
                break ;
            }
        }
    }
    tpos = pos ;
    if(target<tpos)
    {
        while(target<tpos && tpos>=k)
        {
            tpos = tpos-k;
            if(in[tpos]=='T')
            {
                cout << "YES" << "\n";
                return 0 ;
            }
            if(in[tpos]=='#')
            {
                break ;
            }
        }
    }
    cout << "NO" << "\n";
    return 0 ;
}