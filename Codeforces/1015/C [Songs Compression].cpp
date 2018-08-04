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
    lol1;
    lol2;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int n,m,temp,ans=0,flag=0,cur;
    cin >> n >> m;
    long long int inisize[n];
    long long int ini=0;
    long long int dec[n];
    FOR(i,0,n)
    {
        cin >> inisize[i];
        ini+=inisize[i];
        cin >> temp;
        dec[i] = inisize[i]-temp;
    }
    sort(dec,dec+n);
    if(ini<=m)
    {
        cout << "0" << "\n";
    }
    else
    {
        cur=n-1;
        while(ini>=m && cur>=0)
        {
            ini-=dec[cur];
            cur--;
            ans++;
            if(ini<=m)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout << ans << "\n";
            return 0;
        }
        else
        {
            cout << "-1" << "\n";
            return 0;
        }
    }
}