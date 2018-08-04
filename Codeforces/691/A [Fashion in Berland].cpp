#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	int in[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i];
	}
	if(n==1)
	{
		if(in[0]==0)
		{
			cout << "NO" << "\n";
			return 0 ;
		}
		else
		{
			cout << "YES" << "\n";
			return 0 ;
		}
	}
	else
	{
		int count = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(in[i]==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}