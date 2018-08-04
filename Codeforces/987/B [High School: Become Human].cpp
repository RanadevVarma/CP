
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
    long long int x,y ;
    cin >> x >> y ;
    if(x==y || (x==2 && y==4) || (x==4 && y==2))
    {
        cout << "=" << "\n";
    }
    else if((long double)y*log(x) > (long double)x*log(y))
    {
        cout << ">" << "\n";
    }
    else if ((long double)x*log(y) > (long double)y*log(x))
    {
        cout << "<" << "\n";
    }
    return 0 ;
}