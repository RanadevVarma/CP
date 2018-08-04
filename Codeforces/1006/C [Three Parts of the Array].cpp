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

#define MOD 1000000007
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

int main()
{
    lol1;
    lol2;
    int N;
    cin >> N;
    long long int in[N+1];
    long long int ans=0;
    long long int presums[N+1] = {0} ;
    FOR(i,1,N+1)
    {
        cin >> in[i];
    }
    FOR(i,1,N+1)
    {
        presums[i] = presums[i-1] + in[i];
    }
    int fe=1,ts=N;
    //fs implies first segment end
    //ts implies third segment start
    //Two pointer
    while(fe<ts)
    {
        //cout << fe << " " << ts << '\n';
        if(presums[fe]-presums[0]==presums[N]-presums[ts-1])
        {
            ans=presums[fe]-presums[0];
            fe++;
        }
        else if(presums[fe]-presums[0]<presums[N]-presums[ts-1])
        {
            fe++;
        }
        else
        {
            ts--;
        }
    }
    cout << ans << "\n";
    return 0;
}