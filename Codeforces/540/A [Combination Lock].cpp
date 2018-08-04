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

int ans ;

int main()
{
   int n,lol;
   cin >> n ;
   char ini[n+4] ;
   char fin[n+4] ;
   cin >> ini >> fin ;
   for(int i = 0 ; i < n ; i++)
   {
       lol = abs(ini[i]-'0'-(fin[i]-'0'));
       if(lol>=5)
       {
           lol = 10 - lol ;
       }
       ans = ans + lol ;
   }
   cout << ans << "\n";
   return 0 ;
}  