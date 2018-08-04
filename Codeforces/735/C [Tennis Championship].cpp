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

const int mod = 1000000007 ;

int main()
{
    long long int n,ans=0,fibo[100000];
    cin >> n ;
    if(n==2)
    {
        cout << "1" << "\n";
        return 0 ;
    }
    else if(n==3)
    {
        cout << "2" << "\n";
        return 0 ;
    }
    fibo[0] = 2 ;
    fibo[1] = 3 ;
    int i = 2 ;
    while(1)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
        if(fibo[i]>n)
        {
            cout << i << "\n";
            return 0 ;
        }
        i++;
    }
} 