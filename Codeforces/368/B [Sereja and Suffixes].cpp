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

using namespace std ;

#define MOD 1000000007LL

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

map<string,string>out;
map<string,string>::iterator it;

int main()
{
    lol1;
    lol2;
    int n,m,used[100007]={0},distinct[100007],start;
    // No of distict indices from ith index till end
    cin >> n >> m;
    distinct[n]=1;
    int in[n];
    FOR(i,1,n+1)
    {
        cin >> in[i];
    }
    used[in[n]]++;
    //cout << distinct[n] << " ";
    RFOR(i,n-1,0)
    {
        if(used[in[i]]==0)
        {
            distinct[i] = distinct[i+1]+1;
            used[in[i]]++;
        }
        else
        {
            distinct[i] = distinct[i+1];
        }
        //cout << distinct[i] << " " ;
    }
    while(m--)
    {
        cin >> start;
        cout << distinct[start] << "\n";
    }
    return 0;
}