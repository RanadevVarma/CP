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

#define MOD 1000000009LL
#define LOD 1000000006
#define pi 3.14159

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

int mini(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    lol1;
    lol2;
    int n,m;
    cin >> n >> m;
    FOR(i,0,n)
    {
        if(i%2==0)
        {
            FOR(j,0,m)
            {
                cout << "#";
            }
        }
        else
        {
            if(i%4==1)
            {
                FOR(j,0,m-1)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                FOR(j,0,m-1)
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
}