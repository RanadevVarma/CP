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

int ref[26];
int ans = 0 ;

int main()
{
    lol1;
    lol2;
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    if(x1==x2)
    {
        cout << x1+abs(y2-y1) << " " << y1 << " " << x2+abs(y2-y1) << " " << y2 << "\n";
        return 0 ;
    }
    else if(y1==y2)
    {
        cout << x1 << " " << y1+abs(x2-x1) << " " << x2 << " " << y2+abs(x2-x1) << "\n";
        return 0 ;
    }
    else if((x2-x1)==(y2-y1) || (x2-x1)+(y2-y1)==0)
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
        return 0 ;
    }
    else
    {
        cout << "-1" << "\n";
        return 0 ;
    }
}