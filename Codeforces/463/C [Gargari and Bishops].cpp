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

//#define mod 1000000007

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    long long int in[n+1][n+1],prin[3*n],nprin[3*n],ans[2]={0},x[2],y[2];
    for(int i = 0 ; i < 3*n ; i++)
    {
        prin[i]=0;
        nprin[i]=0;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            scanf("%lld",&in[i][j]);
            prin[i+j]+=in[i][j];
            nprin[n+i-j]+=in[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if (ans[(i+j)%2]<=prin[i+j]+nprin[i-j+n]-in[i][j])
            {
                ans[(i+j)%2]=prin[i+j]+nprin[i-j+n]-in[i][j];
                x[(i+j)%2]=i;
                y[(i+j)%2]=j;
            }
        }
    }
    cout << ans[0]+ans[1] << "\n" << x[0] << " " << y[0] << " " << x[1] << " " << y[1] << "\n";
    return 0 ;
}