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
    vector <long long int> x,y;
    long long int N,a,b,length,breadth,side;
    cin >> N;
    while(N--)
    {
        cin >> a >> b;
        x.pb(a);
        y.pb(b);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    length = x[x.size()-1]-x[0];
    breadth = y[y.size()-1]-y[0];
    if(length>breadth)
    {
        cout << length*length << "\n";
    }
    else
    {
        cout << breadth*breadth << "\n";
    }
    return 0;
}