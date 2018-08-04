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
    int n,k,ans,inp,upper,val;
    cin >> n >> k ;
    ans=n;
    int in[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    int start,end,mid,pos;
    for(int i = 0 ; i < n ; i++)
    {
        pos = -1 ;
        val = in[i]+k;
        start = i+1 ;
        end = n-1 ;
        while(start<=end)
        {
            mid = (start+end)/2 ;
            if(in[mid]<=val && in[mid]>in[i])
            {
                pos = mid ;
                break ;
            }
            else if(in[mid]==in[i])
            {
                start = mid+1 ;
            }
            else
            {
                end = mid-1 ;
            }
        }
        //cout << pos << "\n";
        if(pos!=-1)
        {
            ans--;
        }
    }
    cout << ans << "\n";
}