#include <iostream>
#include <cstring>

using namespace std ;

int main()
{
	int n,m ;
	cin >> n >> m ;
	char in[n+1][m+1];
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			cin >> in[i][j];
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			if(in[i][j]=='.')
			{
				if((i+j)%2==0)
				{
					in[i][j] = 'B';
				}
				else
				{
					in[i][j] = 'W';
				}
			}
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			cout << in[i][j] ;
		}
		cout << "\n" ;
	}
}