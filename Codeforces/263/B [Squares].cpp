
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
    int n,k ;
    cin >> n >> k ;
    int opp[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> opp[i];
    }
    sort(opp,opp+n);
    if(k>n)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    else
    {
        cout << opp[n-k] << " " << opp[n-k] << "\n";
        return 0 ;
    }
}