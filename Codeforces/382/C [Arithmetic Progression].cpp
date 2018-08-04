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

#define FOR(i,a,b)  for(i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

int main()
{
    lol1;
    lol2;
    int n,i;
    cin >> n ;
    int in[n] ;
    //map cd<int,int>;
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    if(n==1)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    else if(n==2)
    {
        if(in[0]==in[1])
        {
            cout << "1\n";
            cout << in[0];
        }
        else if((in[1]-in[0])%2==0)
        {
            cout << "3" << "\n" << in[0]-(in[1]-in[0]) << " " << (in[0]+in[1])/2 << " " << in[1]+(in[1]-in[0]) << "\n";
            return 0 ;
        }
        else
        {
            cout << "2" << "\n" << in[0]-(in[1]-in[0]) << " " << in[1]+(in[1]-in[0]) << "\n";
            return 0 ;
        }
    }
    else
    {
        int d[n-1];
        FOR(i,1,n)
        {
            d[i-1]=in[i]-in[i-1];
        }
        sort(d,d+n-1);
        if(in[0]==in[n-1])
        {
            cout<<"1\n";
            cout<<in[0];
        }
        
        else if(d[0]==d[n-2])
        {
            cout<<"2\n";
            cout<<in[0]-d[0]<<" "<<in[n-1]+d[0];
        }
        else if((n==3 || (d[n-3]==d[0])) && d[n-2]==2*d[0])
        {
            FOR(i,1,n)
            {
                if(in[i]-in[i-1]==2*d[0])
                {
                    break;
                }
            }
            cout<<"1\n";
            cout<<in[i-1]+d[0];
        }
        else
        {
            cout<<"0";
        }
    }
    return 0 ;
}