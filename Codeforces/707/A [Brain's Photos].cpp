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

#define db(x) cout << "> " << #x << ": " << x << endl;

using namespace std ;

int main()
{
    int n,m ;
    cin >> n >> m ;
    char in ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> in ;
            if(in!='W' && in!='B' && in!='G')
            {
                cout << "#Color" << "\n"; 
                return 0 ;
            }
        }
    }
    cout << "#Black&White" << "\n";
    return 0 ;
}