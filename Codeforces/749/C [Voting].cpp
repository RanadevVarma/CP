
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

int main()
{
    int n,temp;
    cin >> n ;
    char in[n] ;
    cin >> in ;
    deque <int> dparty,rparty ;
    for(int i = 0 ; i < n ; i++)
    {
    	if(in[i]=='R')
    	{
    		rparty.push_back(i);
    	}
    	else
    	{
    		dparty.push_back(i);
    	}
    }
    while(1)
    {
    	if(rparty.empty()==1)
    	{
    		cout << "D" << "\n";
    		return 0 ;
    	}
    	if(dparty.empty()==1)
    	{
    		cout << "R" << "\n";
    		return 0 ;
    	}
    	if(rparty.front()<dparty.front())
    	{
            temp = rparty.front() ;
            rparty.push_back(temp+n) ;
            rparty.erase(rparty.begin()) ;
            dparty.erase(dparty.begin()) ;
    	}
    	else
    	{
    		temp = dparty.front() ;
            dparty.push_back(temp+n) ;
            dparty.erase(dparty.begin()) ;
            rparty.erase(rparty.begin()) ;
    	}
    }
}