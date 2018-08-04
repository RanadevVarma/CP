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

long long int mymin(long long int a,long long int b,long long int c)
{
    if(a<=b && a<=c)
    {
        return a ;
    }
    else if(b<=c && b<=a)
    {
        return b ;
    }
    else
    {
        return c ;
    }
}

using namespace std ;

int main()
{
    long long int n,a,b,c,add;
    cin >> n >> a >> b >> c ;
    add = n%4 ;
    if(add==0)
    {
        cout << "0" << "\n";
    }
    else if(add==1)
    {
        cout << mymin(3*a,b+a,c);
    }
    else if(add==2)
    {
        cout << mymin(2*a,b,2*c);
    }
    else
    {
        cout << mymin(a,b+c,3*c);
    }
    cout << "\n";
    return 0 ;
} 