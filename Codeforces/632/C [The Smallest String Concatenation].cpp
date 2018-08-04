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

bool cond(string a , string b)
{
    return a+b < b+a ;
}

int main()
{
    int n,m;
    string temp ;
    cin >> n ;
    m = n ;
    vector <string> in ;
    while(n--)
    {
        cin >> temp ;
        in.push_back(temp);
    }
    sort(in.begin(),in.end(),cond);
    for(int i = 0 ; i < m ; i++)
    {
        cout << in[i] ;
    }
    cout << '\n';
    return 0 ;
}