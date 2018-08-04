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

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int ans,sum,tsum;

int main()
{
    int n,m ;
    cin >> n >> m ;
    int min = ceil(n/2.0);
    int max = n ;
    for(int i = min ; i <= max ; i++)
    {
        if(i%m==0)
        {
            cout << i << "\n";
            return 0 ;
        }
    }
    cout << "-1" << "\n";
}  