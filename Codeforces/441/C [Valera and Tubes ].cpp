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

using namespace std ;

vector < pair<int,int> >  path ;

void print(int M , int N)
{
    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++)
                path.push_back(make_pair(i+1,j+1));
        } else {
            for (int j = N - 1; j >= 0; j--)
                path.push_back(make_pair(i+1,j+1));
        }
    }
}

int main()
{
    int n,m,k,now = 0;
    cin >> n >> m >> k ;
    print(n,m);
    while(k>1)
    {
        cout << "2" << " " ;
        cout << path[now].first << " " << path[now].second << " " << path[now+1].first << " " << path[now+1].second << "\n" ;
        now = now + 2 ;
        k--;
    }
    cout << n*m - now << " " ;
    while(now<n*m)
    {
        cout << path[now].first << " " << path[now].second << " " ;
        now++;
    }
}