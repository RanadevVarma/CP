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
    int a,b,c ;
    cin >> a >> b >> c ;
    int ca = 0 ;
    while(ca*a<=c)
    {
        if((c-a*ca)%b==0)
        {
            cout << "YES" << "\n";
            return 0 ;
        }
        ca++;
    }
    cout << "NO" << "\n";
    return 0 ;
}