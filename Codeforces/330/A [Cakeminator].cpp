#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std ;

int main()
{
	int r,c ;
	cin >> r >> c ;
	char in[r][c] ;
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++)
		{
			cin >> in[i][j];
		}
	}
	int ans[r][c] = {0} ;
	int found = 0 ;
	for(int i = 0 ;  i < r ; i++)
	{
		found = 0 ;
		for(int j = 0 ; j < c ; j++)
		{
			if(in[i][j]=='S')
			{
                found = 1 ;
                break ;
			}
		}
		if(found==0)
		{
			for(int j = 0 ; j < c ; j++)
			{
				ans[i][j] = 1 ;
			}
		}
	}
	for(int i = 0 ;  i < c ; i++)
	{
		found = 0 ;
		for(int j = 0 ; j < r ; j++)
		{
			if(in[j][i]=='S')
			{
                found = 1 ;
                break ;
			}
		}
		if(found==0)
		{
			for(int j = 0 ; j < r ; j++)
			{
				ans[j][i] = 1 ;
			}
		}
	}
	int out = 0;
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++)
		{
			if(ans[i][j]==1)
			{
				out++;
			}
		}
	}
	cout << out << "\n";
}