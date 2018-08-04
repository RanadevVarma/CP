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

#define MOD 1000000007LL

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main()
{
    lol1;
    lol2;
    int n,end;
    cin >> n ;
    char in[n],temp;
    cin >> in ;
    vector <int> divisors ;
    for(int i = 1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
        }
    }
    FOR(i,0,divisors.size())
    {
        end = divisors[i];
        FOR(j,0,end/2)
        {
            temp = in[j];
            in[j] = in[end-j-1] ;
            in[end-1-j] = temp ;
        }
    }
    cout << in << "\n";
    return 0 ;
}