
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
    int n ;
    cin >> n ;
    if(n%2==0)
    {
    	cout << n/2 << "\n";
    	while(n>0)
    	{
    		cout << "2" << " " ;
    		n-=2 ;
    	}
    }
    else
    {
    	cout << 1+((n-3)/2) << "\n" << "3" << " " ;
    	n-=3;
    	while(n>0)
    	{
    		cout << "2" << " " ;
    		n-=2 ;
    	}
    }
}