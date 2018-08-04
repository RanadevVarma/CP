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
    int n,in;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in ;
        sum = sum + in ;
    }
    n--;
    for(int i = 0 ; i < 2 ; i++)
    {
        tsum = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> in ;
            tsum = tsum + in ;
        }
        cout << sum - tsum << "\n";
        sum = tsum ;
        n--;
    }
}  