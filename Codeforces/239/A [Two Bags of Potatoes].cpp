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

int main()
{
    //Method and Complexity for reference - bruteforce.
    int y,k,n,first,flag = 0;
    cin >> y >> k >> n ;
    first = k - y%k ;
    if(first>n-y)
    {
        cout << "-1" << "\n";
        return 0;
    }
    for(int i = first ; i <= n-y ; i++)
    {
        cout << i << "\n" ;
        i = i + k - 1 ;
    }
}