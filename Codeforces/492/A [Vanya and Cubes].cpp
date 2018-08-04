#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <stdio.h>

#define INF  -1000000009

using namespace std ;

int ans1,ans2 ;

int used = 0 ;

int main()
{
	int n ;
    cin >> n ;
    int l = 1 ;
    while(used<=n)
    {
        used = used + (l*(l+1))/2 ;
        l++;
    }
    cout << l-2 << "\n";
}