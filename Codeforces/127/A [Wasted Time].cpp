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
    cout << fixed ;
    cout << setprecision(12);
    int n,k,x,y,px,py;
    cin >> n >> k ;
    cin >> px >> py ;
    n--;
    long double dist = 0;
    while(n--)
    {
        cin >> x >> y ;
        dist = dist + sqrt(pow(x-px,2)+pow(y-py,2));
        px = x ;
        py = y ;
    }
    cout << (dist*(double)k)/(double)50 << "\n";
    return 0 ;
}