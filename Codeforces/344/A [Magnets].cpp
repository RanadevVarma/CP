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

int ans;

int main()
{
    lol1;
    lol2;
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    int n;
    cin >> n;
    string in[n];
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    FOR(i,1,n)
    {
        if(in[i][0]==in[i-1][1])
        {
            ans++;
        }
    }
    cout << ans+1 << "\n";
    return 0;
}