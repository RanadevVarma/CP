#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iterator>

using namespace std ;

vector <int> check[51] ; 
vector <int> check2[51] ;
int lite;

int main()
{
	int n,m ;
	cin >> n >> m ;
	char in[51][51] ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cin >> in[i][j];
			if(in[i][j]=='#')
            {
            	check[i].push_back(j);
            }
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(i!=j)
			{
				int a = check[i].size() ;
				int b = check[j].size() ;
				if(check[i]==check[j])
				{
					lite = 1;
				}
			    else
			    {
			    	for(int y = 0 ; y < a ; y++)
			    	{
			    		for(int z = 0 ; z < b ; z++)
			    		{
			    			if(check[i][y]==check[j][z])
			    			{
			    				cout << "NO" << "\n";
			    				return 0;
			    			}
			    		}
			    	}
			    }
			}
		}
	}
	cout << "YES" << "\n";
	return 0;
}