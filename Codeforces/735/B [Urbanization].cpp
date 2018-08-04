
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
#include <deque>

const int mod = 1000000007 ;

using namespace std ;

int main()
{
    cout << fixed ;
    cout << setprecision(12);
    long long int n,a,b,f,s,first=0,second=0;
    cin >> n >> a >> b ;
    int in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    if(a<b)
    {
        f = a ;
        s = b ;
    }
    else
    {
        f = b ;
        s = a ;
    }
    int count = 0 ;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(count<f)
        {
            first+=in[i];
            count++;
        }
        else if(count<f+s)
        {
            second+=in[i];
            count++;
        }
    }
    cout << (first/(double)f) + (second/(double)s) << "\n";
    return 0 ;
}