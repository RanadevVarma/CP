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

#define MOD 1000000007

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int mc(long long int num)
{
    long long int start=0,end=1000007,mid;
    while(start!=end)
    {
        mid = (start+end+1)/2;
        if(mid*mid*mid>num)
        {
            end = mid-1;
        }
        else
        {
            start = mid;
        }
    }
    return start;
}

int main()
{
    lol1;
    lol2;
    long long int n,a,b,c;
    cin >> n;
    FOR(i,0,n)
    {
        cin >> a >> b;
        c=mc(a*b);
        if(c*c*c==a*b)
        {
            if(a%c==0 && b%c==0)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}