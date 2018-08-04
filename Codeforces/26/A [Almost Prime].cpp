
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
#include <deque>

const int mod = 1000000007 ;

using namespace std ;

int isprime(int a)
{
    for(int i = 2 ; i*i<=a ; i++)
    {
        if(a%i==0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int isap(int p)
{
    if(p==1)
    {
        return 0 ;
    }
    int count = 0 ;
    for(int i = 2 ; i <= p ; i++)
    {
        if(p%i==0)
        {
            if(isprime(i)==1)
            {
                count++;
            }
        }
        if(count>2)
        {
            return 0 ;
        }
    }
    if(count==2)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int n,ans=0;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++)
    {
        if(isap(i)==1)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}