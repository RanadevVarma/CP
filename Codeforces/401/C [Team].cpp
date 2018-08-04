#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int main()
{
    int n,m ;
    cin >> n >> m;
    int max = m+1 ;
    int min = floor((m-1)/2.0) ;
    if(n<min || n>max)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    else
    {
        if (m == n-1)
        {
            cout << "0" ;
            n--;
        }
        for (int i = 0; i < n; i++)
        {
            if (m > n+1)
            {
                cout << "1" ;
                m--;
            }
            cout << "10" ;
        }
        if (m > n)
        {
            cout << "1" ;
        }
        if (m > n+1)
        {
            cout << "1" ;
        }  
        cout << "\n" ;
        return 0 ; 
    }
}  