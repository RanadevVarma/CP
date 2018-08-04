// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
 
using namespace std ;

long long int ans[200020],result;
int bucketsize,in[200020],occ[1000020];

bool cond (pair<pair<int,int>,int> a ,pair<pair<int,int>,int> b)
{
    if((a.first.first)/bucketsize!=(b.first.first)/bucketsize)
    {
        return (a.first.first)/bucketsize < (b.first.first)/bucketsize;
    }
    else
    {
        return a.first.second < b.first.second ;
    }
}

void add(int position)
{
    occ[in[position]]++;
    result += (long long int)((occ[in[position]])+(occ[in[position]]-1))*(long long int)in[position];
}

void remove(int position)
{
    occ[in[position]]--;
    result -= (long long int)((occ[in[position]])+(occ[in[position]]+1))*(long long int)in[position];
}

int main()
{
    //MO's
    int n,t,l,r,curr_l,curr_r;
    vector<pair<pair<int,int>,int>> query ;
    bucketsize = (int)sqrt(200020) ;
    scanf("%d %d",&n,&t);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&in[i]);
    }
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d %d",&l,&r);
        query.push_back(make_pair(make_pair(l-1,r-1),i));
    }
    sort(query.begin(),query.end(),cond);
    curr_l = 0 , curr_r = 0 ;
    for(int i = 0 ; i < t ; i++)
    {
        l = query[i].first.first ;
        r = query[i].first.second ;
        while(curr_l < l)
        {
            remove(curr_l);
            curr_l++;
        }
        while(curr_l > l)
        {
            add(curr_l-1);
            curr_l--;
        }
        while(curr_r < r+1)
        {
            add(curr_r);
            curr_r++;
        }
        while(curr_r > r+1)
        {
            remove(curr_r-1);
            curr_r--;
        }
        ans[query[i].second] = result ;
    }
    for(int i = 0 ; i < t ; i++)
    {
        printf("%lld\n",ans[i]);
    }
    return 0 ;
}