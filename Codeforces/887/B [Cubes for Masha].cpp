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

double ans = 0;
 
int main()
{
    lol1;
    lol2;
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    int n;
    cin >> n;
    int f[6],s[6],t[6];
    if(n==1)
    {
        int check[10]={0};
        FOR(i,0,6)
        {
            cin >> f[i];
            check[f[i]]++;
        }
        FOR(i,1,10)
        {
            if(check[i]==0)
            {
                cout << i-1 << "\n";
                return 0;
             }
        }
        cout << "10" << "\n";
    }
    else if(n==2)
    {
        int check[100]={0};
        FOR(i,0,6)
        {
            cin >> f[i];
            check[f[i]]++;
        }
        FOR(i,0,6)
        {
            cin >> s[i];
            check[s[i]]++;
        }
        FOR(i,0,6)
        {
            FOR(j,0,6)
            {
                check[10*f[i] + s[j]]++;
                check[10*s[j] + f[i]]++;
            }
        }
        FOR(i,1,100)
        {
            if(check[i]==0)
            {
                cout << i-1 << "\n";
                return 0;
            }
        }
        cout << "100" << "\n";
    }
    else
    {
        int check[1000]={0};
        // 1 to 999, or may be zero
        FOR(i,0,6)
        {
            cin >> f[i];
        } 
        FOR(i,0,6)
        {
            cin >> s[i];
        }
        FOR(i,0,6)
        {
            cin >> t[i];
        }
        FOR(i,0,6)
        {
            FOR(j,0,6)
            {
                FOR(k,0,6)
                {
                    check[100*f[i] + 10*s[j] + t[k]]++;
                    check[100*f[i] + 10*t[j] + s[k]]++;
                    check[100*s[i] + 10*f[j] + t[k]]++;
                    check[100*s[i] + 10*t[j] + f[k]]++;
                    check[100*t[i] + 10*s[j] + f[k]]++;
                    check[100*t[i] + 10*f[j] + s[k]]++;
                    check[f[i]]++;
                    check[s[i]]++;
                    check[t[i]]++;
                    check[10*f[i] + s[j]]++;
                    check[10*s[j] + f[i]]++;
                    check[10*f[i] + t[j]]++;
                    check[10*t[j] + f[i]]++;
                    check[10*t[i] + s[j]]++;
                    check[10*s[j] + t[i]]++;
                }
            }
        }
        FOR(i,1,1000)
        {
            if(check[i]==0)
            {
                cout << i-1 << "\n";
                return 0;
            }
        }
        cout << "1000" << "\n";
        return 0;
    }
}