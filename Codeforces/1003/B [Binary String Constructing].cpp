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

#define FOR(i,a,t)  for(int i = a ; i < t ; i++)
#define RFOR(i,a,t) for(int i = a ; i > t ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main()
{
    lol1;
    lol2;
    int a,b,x,last_used;
    cin >> a >> b >> x;
    if(x==1)
    {
        while(a--)
        {
            cout << "0";
        }
        while(b--)
        {
            cout << "1";
        }
        return 0;
    }
    if(a>b)
    {
        FOR(i,0,x)
        {
            if(i%2==0)
            {
                cout << "0";
                a--;
                last_used=0;
            }
            else
            {
                cout << "1";
                b--;
                last_used=1;
            }
        }
        if(last_used==1)
        {
            while(b)
            {
                cout << "1";
                b--;
            }
            while(a)
            {
                cout << "0";
                a--;
            }
        }
        else
        {
            while(a)
            {
                cout << "0";
                a--;
            }
            while(b)
            {
                cout << "1";
                b--;
            }
        }
    }
    else
    {
        FOR(i,0,x)
        {
            if(i%2==0)
            {
                cout << "1";
                b--;
                last_used=1;
            }
            else
            {
                cout << "0";
                a--;
                last_used=0;
            }
        }
        if(last_used==1)
        {
            while(b)
            {
                cout << "1";
                b--;
            }
            while(a)
            {
                cout << "0";
                a--;
            }
        }
        else
        {
            while(a)
            {
                cout << "0";
                a--;
            }
            while(b)
            {
                cout << "1";
                b--;
            }
        }
    }
    cout << "\n";
    return 0;
}