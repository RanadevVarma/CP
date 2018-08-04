
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
    long long int x,y,n;
    cin >> x >> y >> n ;
    n--;
    long long int res[6] = {(x+mod)%mod,(y+mod)%mod,(y-x+mod)%mod,(-x+mod)%mod,(-y+mod)%mod,(x-y+mod)%mod};
    cout << (res[n%6] + mod)%mod << "\n";
    return 0 ;
}