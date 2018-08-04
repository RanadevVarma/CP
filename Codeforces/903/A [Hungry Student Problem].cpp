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
	int t , n , check ;
	cin >> t ;
	while(t--)
	{
		cin >> n ;
		check = 0 ;
		while(n>=0)
		{
			if(n%3==0)
			{
				check = 1 ;
				break ;
			}
			else
			{
				n = n - 7 ;
			}
		}
		if(check==1)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}