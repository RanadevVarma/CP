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

int main()
{
    long long int n;
    cin >> n ;
    string in[n] ;
    long long int ref[300009][2] ;
    for(int i = 0 ; i < 300009 ; i++)
    {
        ref[i][0] = 0 ;
        ref[i][1] = 0 ;
    }
    long long int balanced = 0 ;
    long long int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        int open = 0,close = 0 ;
        for(int j = 0 ; j < in[i].length() ; j++)
        {
            if(in[i][j]==')')
            {
                if(open==0)
                {
                    close++;
                }
                else
                {
                    open--;
                }
            }
            else if(in[i][j]=='(')
            {
                open++;
            }
        }
        //already good
        if(open==0 && close==0)
        {
            balanced++;
        }
        //needs balancing
        else if(open==0 && close>open)
        {
            ref[close][0]++;
        }
        else if(close==0 && open>close)
        {
            ref[open][1]++;
        }
    }
    ans+=balanced*balanced ;
    for(int i = 0 ; i < 300009 ; i++)
    {
        ans+=ref[i][0]*ref[i][1];
    }
    cout << ans << "\n";
    return 0 ;
}