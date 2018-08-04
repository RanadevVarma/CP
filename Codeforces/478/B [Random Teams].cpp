#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std ;

long long int comb(long long int n)
{
    if(n==0 || n==1)
    {
        return 0 ;
    }
    else
    {
        return (n*(n-1))/2;
    }
}

int main()
{
    int t ;
    long long int n , m ;
    cin >> n >> m ;
    t = n/m;
    cout << comb(t)*m +(n % m)*(n / m) << " " << comb(n-m+1) << "\n";
    return 0 ;
}  