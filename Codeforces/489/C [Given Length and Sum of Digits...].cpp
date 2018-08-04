#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>
#include <stack>
#include <vector>

using namespace std ;

int pos(int sum, int dig)
{
	if(sum>=0 && sum <= 9*dig)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int m,s ;
	cin >> m >> s ;
	int min[m];
	int max[m];
	int sum = s ;
	int dig = m ;
	if(m==1 && s>9)
	{
		cout << "-1" << " " << "-1" << "\n";
		return 0 ;
	}
	if(m==1 && s==0)
	{
		cout << "0" << " " << "0" << "\n";
		return 0;
	}
	else if(m>1 && s==0)
	{
		cout << "-1" << " " << "-1" << "\n";
		return 0;
	}
	else if( s> 9*m)
	{
		cout << "-1" << " " << "-1" << "\n";
		return 0;
	}
	else
	{

		for(int i = 0 ; i < m ; i++)
		{
			for(int j = 0 ; j <= 9 ; j++)
			{
				if(i==0 && j==0)
				{
	                j++;
				}
				if(pos(sum-j,dig-1)==1)
				{
					min[i] = j ;
					sum = sum - j ;
	                dig--;
	                break ;
				}
			}
		}
		sum = s ;
		dig = m ;
		for(int i = 0 ; i < m ; i++)
		{
			for(int j = 9 ; j >= 0 ; j--)
			{
	            if(pos(sum-j,dig-1)==1)
				{
					max[i] = j ;
					sum = sum - j ;
	                dig--;
	                break ;
				}
			}
		}
		for(int i = 0 ; i < m ; i++)
		{
			cout << min[i];
		}
		cout << " " ;
		for(int i = 0 ; i < m ; i++)
		{
			cout << max[i];
		}
		cout << "\n" ;
	}
}