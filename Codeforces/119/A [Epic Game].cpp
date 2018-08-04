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
    int a,b,n ;
    cin >> a >> b >> n ;
    bool lol = true ;
    int i = 0,sub;
    while(lol)
    {
        if(i%2==0)
        {
            sub = gcd(a,n);
            if(sub<=n)
            {
                n = n - sub ;
            }
            else
            {
                cout << "1" << "\n";
                return 0 ;
            }
        }
        else if(i%2==1)
        {
            sub = gcd(b,n);
            if(sub<=n)
            {
                n = n - sub ;
            }
            else
            {
                cout << "0" << "\n";
                return 0 ;
            }
        }
        i++;
    }
}  