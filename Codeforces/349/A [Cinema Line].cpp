// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mod 1000000007

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
    int n,in;
    cin >> n ;
    int tf = 0, f = 0, h = 0 ;
    while(n--)
    {
        cin >> in ;
        if(in==25)
        {
            tf++;
        }
        else if(in==50)
        {
            if(tf<1)
            {
                cout << "NO" << "\n";
                return 0 ;
            }
            else
            {
                tf--;
                f++;
            }
        }
        else
        {
            if(f>=1 && tf>=1)
            {
                f--;
                tf--;
            }
            else if(tf>=3)
            {
                tf = tf-3 ;
            }
            else
            {
                cout << "NO" << "\n";
                return 0 ;
            }
        }
    }
    cout << "YES" << "\n";
    return 0 ;
}