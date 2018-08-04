#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

long long int count1,count2 ;

int main()
{
    int T , a ;
    cin >> T ;
    while(T--)
    {
    	cin >> a ;
    	if(360%(180-a)==0)
    	{
    		cout << "YES" << "\n";
    	}
    	else
    	{
    		cout << "NO" << "\n";
    	}
    }	
} 