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

vector <int> place ;

long long int ans = 1 ;

int main()
{
    int n,in,count = 0;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in ;
        if(in==1)
        {
            place.push_back(i);
        }
        else
        {
            count++;
        }
    }
    if(count==n)
    {
        cout << "0" << '\n';
        return 0 ;
    }
    for(int i = 0 ; i < place.size()-1 ; i++)
    {
        ans = ans*(place[i+1]-place[i]);
    }
    cout << ans << "\n";
}