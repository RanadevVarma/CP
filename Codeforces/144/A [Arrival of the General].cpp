#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std ;

int ans,sum;

int main()
{
    int n,min,max,minindex,maxindex;
    cin >> n ;
    int in[n] ;
    int lol[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i] ;
        lol[i] = in[i] ;
    }
    sort(lol,lol+n);
    min = lol[0] ;
    max = lol[n-1] ;
    for(int i = 0 ; i < n ; i++)
    {
        if(in[i]==max)
        {
            maxindex = i ;
            break ;
        }
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(in[i]==min)
        {
            minindex = i ;
            break ;
        }
    }
    if(maxindex<minindex)
    {
        cout << maxindex-0+n-1-minindex << "\n";
    }
    else
    {
        cout << maxindex-0+n-1-minindex-1 << "\n";
    }
}