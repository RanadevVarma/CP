
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

using namespace std ;

const int maxlen = 1000009 ;
char in[maxlen] ;
int len ;

int main()
{
    cin >> in ;
    cout << in ;
    len = strlen(in);
    for(int i = len-1 ; i>=0 ; i--)
    {
        cout << in[i] ;
    }
    cout << "\n";
    return 0 ;
}