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
    cin >> in ;
    int len = strlen(in) ;
    int fp[len] , lp[len] ;
    int a,b ;
    cin >> a >> b ;
    for(int i = 0 ; i < len ; i++)
    {
        if(i==0)
        {
            fp[i] = (in[i]-'0')%a ;
        }
        else
        {
            fp[i] = (fp[i-1]*10 + in[i]-'0')%a ;
        }
    }
    int mod = 1 ;
    for(int i = len-1 ; i >= 0 ; i--)
    {
        if(i==len-1)
        {
            lp[i] = (in[i]-'0')%b ;
        }
        else
        {
            mod = (mod*10) ;
            mod = mod%b ;
            lp[i] = ((in[i]-'0')*mod + lp[i+1])%b ;
        }
    }
    for(int i = 0 ; i < len-1 ; i++)
    {
        if(fp[i]==0 && lp[i+1]==0 && in[i+1]!='0')
        {
            cout << "YES" << "\n";
            for(int j = 0 ; j < i+1 ; j++)
            {
                cout << in[j] ;
            }
            cout << "\n";
            for(int j = i+1 ; j < len ; j++)
            {
                cout << in[j] ;
            }
            cout << "\n";
            return 0 ;
        }
    }
    cout << "NO" << "\n";
    return 0 ;
}