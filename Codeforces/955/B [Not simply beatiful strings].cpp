#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <cstring>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
#include <stdio.h>

using namespace std ;

int ans = 0 ;
int table[26] ;
int occ , flag ;

int main()
{
	char in[100007] ;
	cin >> in ;
	int len = strlen(in);
	if(len<4)
	{
		cout << "No" << "\n";
		return 0 ;
	}
	for(int i = 0 ; i < len ; i++)
	{
		table[in[i]-'a']++;
	}
	for(int i = 0 ; i < 26 ; i++)
	{
        if(table[i]>0)
        {
        	occ++;
        	if(table[i]==1)
        	{
        		flag = 1 ;
        	}
        }
	}
	if(occ==3 || occ==4 || (occ==2 && flag!=1))
	{
		cout << "YES" << "\n";
		return 0 ;
	}
    cout << "No" << '\n';
    return 0 ;
} 