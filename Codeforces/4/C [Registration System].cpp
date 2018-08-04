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
    string in ;
    cin >> n ;
    map <string,int> used ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in ;
        if(used[in]!=0)
        {
            cout << in << used[in] << "\n";
            used[in]++;
        }
        else
        {
            used[in] = 1 ;
            cout << "OK" << "\n";
        }
    }
    return 0 ;
} 


