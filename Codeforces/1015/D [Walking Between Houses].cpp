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
    long long int n,k,s;
    cin >> n >> k >> s;
    long long int step,des,curpos=1,tcurpos=1,direc=1,c=0;
    if(s<k || s>k*(n-1))
    {
        cout << "NO" << "\n";
        return 0;
    }
    else
    {
        cout << "YES" << "\n";
        while(s)    
        {
            step=s/k;
            if(c%2==0)
            {
                if(step*k<s && curpos+step<=n-1)
                {
                    step++;
                }
                curpos = curpos + step;
                s-=step;
                k--;
            }
            else
            {
                if(step*k<s && curpos-step>=2)
                {
                    step++;
                }
                curpos = curpos - step;
                s-=step;
                k--;
            }
            c++;
            cout << curpos << " ";
        }
    }
    cout << "\n";
    return 0;
} 