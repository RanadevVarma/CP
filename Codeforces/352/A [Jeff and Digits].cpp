#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

long long int ans , five , zero ;

int main()
{
    int n, in;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
    	cin >> in ;
    	if(in==0)
    	{
    		zero++;
    	}
    	else
    	{
    		five++;
    	}
    }
    if(five<9 && zero>0 )
    {
    	cout << "0" << "\n";
    	return 0 ;
    }
    if(five<9 || zero==0)
    {
    	cout << "-1" << "\n";
    	return 0;
    }
    int ns = five/9 ;
    for(int i = 0 ; i < ns ; i++)
    {
    	cout << "555555555" ;
    }
    for(int i = 0 ; i < zero ; i++)
    {
    	cout << "0" ;
    }
} 