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

#define MOD 1000000007

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

int main()
{
    lol1;
    lol2;
    int n ;
    cin >> n ;
    int s,f ;
    s = n/7 ;
    while(s>=0)
    {
        if((n-s*7)%4==0)
        {
            f = (n-s*7)/4 ;
            break ;
        }
        s--;
    }
    if(s<=0 && (n%4!=0))
    {
        cout << "-1" << "\n";
    }
    else
    {
        while(f>0)
        {
            cout << "4" ;
            f--;
        }
        while(s>0)
        {
            cout << "7" ;
            s--;
        }
        cout << "\n";
    }
    return 0 ;
}