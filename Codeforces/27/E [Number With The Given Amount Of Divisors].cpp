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
#include <set>
 
using namespace std ;
 
#define MOD 1000000007
#define pi 3.14159
 
#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)
 
#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int primes[10] = {2,3,5,7,11,13,17,19,23,29};
long long int ans  = 1e18 + 11;
int N;

void func(int i,long long int x,int n)
{
    if(n>N) 
    {
        return;
    }
    if(n==N && ans>x) 
    {
        ans=x;
    }
    FOR(j,1,61)
    {
        if (ans/primes[i]<x)
        {
            break;
        }
        func(i+1,x*=primes[i],n*(j+1));
    }
}
 
int main()
{
    lol1;
    lol2;
    //srand((unsigned)time(0));
    cin >> N;
    func(0,1,1);
    cout << ans << "\n";
    return 0;
}     