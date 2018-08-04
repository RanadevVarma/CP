// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
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
 
#define MOD 1000000007
#define LOD 1000000006
#define pi 3.14159
 
#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)
 
#define FOR(i,a,b)  for(long long int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(long long int i = a ; i > b ; i--)
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
int main()
{
    lol1;
    lol2;
    long long int n,ans=0;
    cin >> n;
    int pertest=9;
    vector<int> digits;
    while(n)
    {
        if(n<=pertest)
        {
            digits.pb(n);
            break;
            n=0;
        }
        else
        {
            digits.pb(pertest);
            n-=pertest;
        }
        pertest = pertest*10;
    }
    FOR(i,0,digits.size())
    {
        ans+=(i+1)*digits[i];
    }
    cout << ans << "\n";
    return 0;
}