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

using namespace std ;

vector <int> place ;


int main()
{
    cout << fixed ;
    long long int n ;
    cin >> n ;
    if(n==1 || n==2)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    if(n%2==1)
    {
        cout << (n*n-1)/2 << " " << (n*n+1)/2 << "\n";
        return 0 ;
    }
    else
    {
        cout << (n*n/2+2)/2 << " " << (n*n/2-2)/2 << "\n";
        return 0 ;
    }
}