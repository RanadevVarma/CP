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

int main()
{
    int n ;
    cin >> n ;
    int in[n/2] ;
    for(int i = 0 ; i < n/2 ; i++)
    {
        cin >> in[i];
    }
    sort(in,in+(n/2));
    int ans1 = 0 , ans2 = 0 ;
    int curr1 = 1 , curr2 = 2 ;
    for(int i = 0 ; i < n/2 ; i++)
    {
        ans1 = ans1 + abs(in[i]-curr1);
        curr1 = curr1 + 2 ;
        ans2 = ans2 + abs(in[i]-curr2);
        curr2 = curr2 + 2 ;
    }
    cout << min(ans1,ans2) << "\n" ;
    return 0 ;
}