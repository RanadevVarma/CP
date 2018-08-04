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
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    int len;
    int a[26]={0},b[26]={0};
    cin >> len;
    int used[len]={0};
    string s,t;
    char temp;
    cin >> s >> t;
    FOR(i,0,len)
    {
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    FOR(i,0,26)
    {
        if(a[i]!=b[i])
        {
            cout << "-1" << "\n";
            return 0;
        }
    }
    vector <int> moves;
    FOR(i,0,len)
    {
        FOR(j,i,len)
        {
            if(s[j]==t[i])
            {
                if(j!=i && j>i)
                {
                    RFOR(k,j,i)
                    {
                        temp=s[k];
                        s[k]=s[k-1];
                        s[k-1]=temp;
                        moves.pb(k);
                    }
                }
                break;
            }
        }
        //cout << s << "\n";
    }
    cout << moves.size() << "\n";
    FOR(i,0,moves.size())
    {
        cout << moves[i] << " ";
    }
    cout << "\n";
    return 0;
}