#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>

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
    int n ;
    cin >> n ;
    char in[n+6] ;
    cin >> in ;
    int ones = 0 , zeros = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(in[i]=='0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }
    cout << abs(zeros-ones) << "\n";
}  