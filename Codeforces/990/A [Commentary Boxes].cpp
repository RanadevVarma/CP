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

#define db(x) cout << "> " << #x << ": " << x << endl;

using namespace std ;

int main()
{
    long long int n,m ;
    long long int a,b ;
    cin >> n >> m >> a >> b ;
    long long int sub = n%m ;
    long long int add = m-(sub);
    cout << min(b*sub,a*add) << "\n";
    return 0 ;
}