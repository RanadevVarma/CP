
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
#include <deque>

const int mod = 1000000007 ;

using namespace std ;

int main()
{
    const int max = 100009 ;
    char a[max],b[max];
    cin >> a >> b ;
    int len = strlen(a),diff = 0,pos = 0;
    for(int i = 0 ; i < len ; i++)
    {
        if(a[i]!=b[i])
        {
            diff++;
        }
    }
    if(diff%2==1)
    {
        cout << "impossible" << "\n";
        return 0 ;
    }
    else
    {
        for(int i = 0 ; i < len ; i++)
        { 
            if(a[i]==b[i])
            {
                cout << a[i] ;
            }
            else
            {
                if(pos%2==0)
                {
                    cout << a[i] ;
                }
                else
                {
                    cout << b[i] ;
                }
                pos++;
            }
        }
    }
    cout << "\n";
    return 0 ;
}