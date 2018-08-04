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

int main()
{
    int a,b,c ;
    int dist,tdist ;
    cin >> a >> b >> c ;
    for(int i = 0 ; i <= 100 ; i++)
    {
        if(i==0)
        {
            dist = abs(i-a) + abs(i-b) + abs(i-c);
        }
        else
        {
            tdist = abs(i-a) + abs(i-b) + abs(i-c);
            dist = min(dist,tdist);
        }
    }
    cout << dist << "\n";
}  