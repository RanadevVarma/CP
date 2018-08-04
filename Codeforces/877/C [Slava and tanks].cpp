// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mod 1000000007

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

char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main()
{
    int n ;
    cin >>  n ;
    cout << n+(n/2) << "\n";
    //even
    for(int i = 2 ; i <= n ; i = i+2)
    {
        cout << i << " " ;
    }
    //odd
    for(int i = 1 ; i <= n ; i = i+2)
    {
        cout << i << " " ;
    }
    //even
    for(int i = 2 ; i <= n ; i = i+2)
    {
        cout << i << " " ;
    }
    return 0 ;
}