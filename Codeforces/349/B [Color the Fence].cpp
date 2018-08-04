
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

using namespace std ;

int main()
{
    int v,len=0,dig,curlen,sub,min=10000000,minnum;
    cin >> v ;
    int dc[10] ;
    for(int i = 1 ; i <= 9 ; i++)
    {
        cin >> dc[i];
        if(dc[i]<=min)
        {
            min = dc[i];
            minnum=i;
        }
    }
    len = v/min;
    int in[len];
    for(int i = 0 ; i < len ; i++)
    {
        in[i] = minnum ;
    }
    for(int i = 0 ; i < len ; i++)
    {
        for(int j = 9 ; j >= 1 ; j--)
        {
            if(v>=dc[j]+(len-i-1)*dc[minnum])
            {
                in[i] = j ;
                v-=dc[j] ;
                break ;
            }
        }
    }
    if(len==0)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    else
    {
        for(int i = 0 ; i < len ; i++)
        {
            cout << in[i] ;
        }
        cout << "\n";
        return 0 ;
    }
}