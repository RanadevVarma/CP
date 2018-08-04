
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

int main()
{
    int n ;
    cin >> n ;
    int in[n][n],cond;
    vector <int> good ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> in[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        cond = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            if(in[i][j]==1 || in[i][j]==3)
            {
                cond = 1 ;
                break ;
            }
        }
        if(cond==0)
        {
            good.push_back(i+1);
        } 
    }
    cout << good.size() << "\n";
    for(int i = 0 ; i < good.size() ; i++)
    {
        cout << good[i] << " " ;
    }
    cout << "\n";
    return 0 ;
}