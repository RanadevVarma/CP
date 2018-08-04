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
    long long int n,p,na=0;
    long long int ans = 0 ;
    cin >> n >> p ;
    string in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    for(int i = n-1 ; i>=0 ; i--)
    {
        na*=2;
        if(in[i].length()==8)
        {
            na++;
        }
        ans += (na*p)/2;
    }
    cout << ans << "\n";
}