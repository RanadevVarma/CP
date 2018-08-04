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
    int n,m ;
    cin >> n >> m ;
    cout << min(n,m)+1 << "\n" ;
    if(m<=n)
    {
        int xcord = 0 ;
        while(m>=0)
        {
            cout << xcord << " " << m << "\n";
            m--;
            xcord++;
        }
    }
    else
    {
        int ycord = 0 ;
        while(n>=0)
        {
            cout << n << " " << ycord << "\n";
            n--;
            ycord++;
        }
    }
}