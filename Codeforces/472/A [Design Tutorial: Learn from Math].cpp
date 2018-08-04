#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std ;

int prime(int n)
{
    for(long long int i = 2 ; i*i <= n ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int n;
    cin >> n ;
    int a , b ;
    for(a = 2 ; a <= n-2 ; a++)
    {
        b = n-a ;
        if(prime(a)==0 && prime(b)==0)
        {
            cout << a << " " << b << "\n";
            return 0 ;
        }
    }
}  