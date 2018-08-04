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

int pos(int a,int b,int c)
{
    if(a+b>c && b+c>a && a+c>b && abs(a-b)<c && abs(a-c)<b && abs(b-c)<a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int deg(int a,int b,int c)
{
    int in[3];
    in[0]=a;
    in[1]=b;
    in[2]=c;
    sort(in,in+3);
    if(in[0]+in[1]==in[2])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    lol1;
    lol2;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(pos(a,b,c) || pos(b,c,d) || pos(a,c,d) || pos(a,b,d))
    {
        cout << "TRIANGLE" << "\n";
        return 0;
    }
    else if(deg(a,b,c) || deg(b,c,d) || deg(a,c,d) || deg(a,b,d))
    {
        cout << "SEGMENT" << "\n";
        return 0;
    }  
    else
    {
        cout << "IMPOSSIBLE" << "\n";
        return 0;
    }
} 