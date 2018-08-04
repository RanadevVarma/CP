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

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

/*void swap(int in[],int a,int b)
{
    int temp = in[a];
    in[a] = in[b];
    in[b] = temp;
}*/

int main()
{
    lol1;
    lol2;
    long long int n,sum1=0,sum2=0;
    vector<int> power[10009];
    cin >> n;
    int a=0,b=n-2;
    int in[n];
    FOR(i,0,n)
    {
        cin >> in[i];
        power[in[i]].pb(i+1);
    }
    sort(in,in+n);
    FOR(i,0,n)
    {
        if(i<(n+1)/2)
        {
            sum1+=in[i];
        }
        else
        {
            sum2+=in[i];
        }
    }
    while(abs(sum2-sum1)>in[n-1])
    {
        int temp = in[a];
        in[a] = in[b];
        in[b] = temp;
        sum1+=in[a]-in[b];
        sum2+=in[b]-in[a];
        a++;
        b--;
        if(a>=(n+1)/2 || b<=(n+1)/2)
        {
            break ;
        }
    }
    cout << (n+1)/2 << "\n";
    FOR(i,0,(n+1)/2)
    {
        cout << power[in[i]].back() << " " ;
        power[in[i]].pop_back();
    }
    cout << "\n";
    cout << n-((n+1)/2) << "\n";
    FOR(i,(n+1)/2,n)
    {
        cout << power[in[i]].back() << " " ;
        power[in[i]].pop_back();
    }
    FOR(i,0,power[1].size())
    {
        cout << power[0][i] << " " ;
    }
    cout << "\n";
    return 0 ;
}