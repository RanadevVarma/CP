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
    int n,start=0,end=0,flag=1,l,r;
    cin >> n ;
    int in[n],ref[n];
    FOR(i,0,n)
    {
        cin >> in[i] ;
        ref[i] = in[i] ;
    }
    sort(ref,ref+n);
    FOR(i,0,n)
    {
        if(in[i]!=ref[i])
        {
            start = i ;
            break ;
        }
    }
    RFOR(i,n-1,-1)
    {
        if(in[i]!=ref[i])
        {
            end = i ;
            break ;
        }
    }
    l = start ;
    r = end ;
    FOR(i,start,end+1)
    {
        if(in[i]!=ref[end-i+start])
        {
            cout << "no" << "\n";
            return 0 ;
        }
    }
    cout << "yes" << "\n" << l+1 << " " << r+1 << "\n";
    return 0 ;
}