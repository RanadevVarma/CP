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
    int n,k,dis=0;
    int count[100007]={0};
    cin >> n >> k;
    int in[n+1];
    int j = 0;
    FOR(i,1,n+1)
    {
        cin >> in[i];
        count[in[i]]++;
        if (count[in[i]] == 1) 
        {
            dis++;
        }
        while (dis==k)
        {
            j++;
            count[in[j]]--;
            if (count[in[j]] == 0)
            {
                cout << j << " " << i << "\n";
                return 0;
            }
        }
    }
    cout << "-1 -1" << "\n";
    return 0;
}