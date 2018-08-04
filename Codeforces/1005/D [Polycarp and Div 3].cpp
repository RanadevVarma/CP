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
#define pi 3.14159
 
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
    string in;
    cin >> in;
    int count=0,ans=0,sum=0;
    FOR(i,0,in.length())
    {
        count++;
        sum+=in[i]-'0';
        if(in[i]=='0' || in[i]=='3' || in[i]=='6' || in[i]=='9' || sum%3==0 || count>=3)
        {
            ans++;
            count=0;
            sum=0;
        }
    }
    cout << ans << "\n";
    return 0;
} 