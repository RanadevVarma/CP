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

int main()
{
    lol1;
    lol2;
    int n;
    cin >> n;
    int in[n],min=1001,minindex;
    FOR(i,0,n)
    {
        cin >> in[i];
        if(in[i]<min)
        {
            min=in[i];
            minindex=i;
        }
    }
    if(n==1)
    {
        cout << "-1" << "\n";
    }
    else if(n==2 && in[0]==in[1])
    {
        cout << "-1" << "\n";
    }
    else
    {
        cout << "1" << "\n";
        cout << minindex+1 << "\n";
        return 0;
    }
} 