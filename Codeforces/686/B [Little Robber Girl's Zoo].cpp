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
    int n,temp;
    cin >> n ;
    int in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(in[j]>in[j+1])
            {
                temp = in[j];
                in[j] = in[j+1];
                in[j+1] = temp;
                cout << j+1 << " " << j+2 << "\n";
            }
        }
    }
}