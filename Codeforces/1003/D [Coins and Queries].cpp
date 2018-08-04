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
    long long int n,q,in,size,lol,now,level,tans,found=0,flag,power[33];
    power[0]=1;
    FOR(i,1,33)
    {
        power[i]=power[i-1]*2;
    }
    cin >> n >> q;
    map <long long int,long long int> coins,tcoins;
    while(n--)
    {
        cin >> in;
        coins[in]++;
    }
    vector<int>bits;
    while(q--)
    {
        tcoins=coins;
        cin >> in;
        tans=0;
        while(in)
        {
            bits.pb(in%2);
            in/=2;
        }
        found=1;
        flag=0;
        size = bits.size();
        RFOR(i,size-1,-1)
        {
            if(bits[i]==1)
            {   
                now=power[i],level=i,found=0;
                while(level>=0)
                {
                    if(power[level]*tcoins[power[level]]>=now)
                    {
                        tans+=(now/power[level]);
                        tcoins[power[level]]-=(now/power[level]);
                        found=1;
                        break;
                    }
                    else if(tcoins[power[level]]>0)
                    {
                        now = now-((tcoins[power[level]])*power[level]);
                        tans+=(tcoins[power[level]]);
                        tcoins[power[level]]=0;
                        level--;
                    }
                    else
                    {
                        level--;
                    }
                }
                if(found==0)
                {
                    flag=1;
                    break;
                }
                //cout << tans << "\n";
            }
        }
        if(flag==1)
        {
            cout << "-1" << "\n";
        }
        else
        {
            cout << tans << "\n";
        }
        bits.clear();
    }
}