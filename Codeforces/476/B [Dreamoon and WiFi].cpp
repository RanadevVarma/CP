// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev

// Ref. for using Segtree :- https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/tutorial/

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mod 1000000007

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

using namespace std ;

int comb(int n,int r){
    int ans = 1 ;
    for(int i = 0 ; i < r ; i++)
    {
        ans = ans*(n-i);
    }
    for(int j = 1 ; j <= r ; j++)
    {
        ans = ans/j ;
    }
    return ans ;
}

int main()
{
    cout << fixed ;
    cout << setprecision(12);
    string orig,curr ;
    cin >> orig >> curr ;
    int dest = 0 ,currdest = 0 , places = 0,req,ones,zeros,ways,total;
    long double prob ;
    int l = orig.length() ;
    for(int i = 0 ; i < l ; i++)
    {
        if(orig[i]=='+')
        {
            dest++;
        }
        else
        {
            dest--;
        }
        if(curr[i]!='?')
        {
             if(curr[i]=='+')
             {
                 currdest++;
             }
             else
             {
                 currdest--;
             }
        }
        else
        {
            places++;
        }
    }
    req = abs(dest-currdest);
    if(req>places)
    {
        cout << "0" << "\n";
        return 0 ;
    }
    else
    {
        if((places+req)%2==1 || (places-req)%2==1)
        {
            cout << "0" << "\n";
            return 0 ;
        }
        else
        {
            ones = (places + req)/2 ;
            zeros = (places - req)/2 ;
            ways = comb(places,ones) ;
            total = pow(2,places) ;
        }
    }
    prob = (long double)ways/total ;
    cout << prob << "\n";
    return 0 ;
}