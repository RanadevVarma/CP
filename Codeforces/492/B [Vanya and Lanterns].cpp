#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std ;

double maxi(int pos1,int pos2,double pos3)
{
    if(pos1>=pos2 && pos1>=pos3)
    {
        return pos1 ;
    }
    else if(pos2>=pos1 && pos2>=pos3)
    {
        return pos2 ;
    }
    else
    {
        return pos3 ;
    }
}

int main()
{
    int n,m;
    cin >> n >> m ;
    int in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    int ma = 0 , tmax ;
    int pos1 = in[0]-0 ;
    int pos2 = m-in[n-1] ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(i==0)
        {
            ma = in[i+1]-in[i];
        }
        else
        {
            tmax = in[i+1]-in[i];
            ma = max(tmax,ma);
        }
    }
    double pos3 = ma/2.0 ;
    double ans = maxi(pos1,pos2,pos3);
    cout << fixed << setprecision(12) << ans << "\n";
}  