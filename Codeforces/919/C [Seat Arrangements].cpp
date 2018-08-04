#include <iostream>
#include <cstring>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std ;

int ans ;

long long int comb( int n , int k)
{
	return n-k+1 ;
}

int main()
{
	int n , m , k ;
	cin >> n >> m >> k ;
	char in[n][m];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cin >> in[i][j] ;
		}
	}
	if(k==1)
	{
	    for(int i = 0 ; i < n ; i++)
	    {
	    	for(int j = 0 ; j < m ; j++)
	    	{
	    		if(in[i][j]=='.')
	    		{
	    			ans++;
	    		}
	    	}
	    }
	    cout << ans << "\n"  ;
	}
	else
	{   for(int i = 0 ; i < n ; i++)
	    {
	    	int empty = 0;
	        for(int j = 0 ; j < m ; j++)
	        {
	        	if(in[i][j]=='.')
	        	{
	        		empty++;
	        	}
	        	if(in[i][j]=='*' && empty<k)
	        	{
	        		empty = 0;
	        	}
	        	if(in[i][j]=='*' && empty>=k)
	        	{
	        		ans = ans + comb(empty,k);
	        		empty = 0;
	        	}
	        	if(empty>=k && j==m-1)
	        	{
	        		ans = ans + comb(empty,k);
	        		empty = 0;
	        	}
	        }
	    }
        for(int i = 0 ; i < m ; i++)
	    {
	    	int empty = 0;
	        for(int j = 0 ; j < n ; j++)
	        {
	        	if(in[j][i]=='.')
	        	{
	        		empty++;
	        	}
	        	if(in[j][i]=='*' && empty<k)
	        	{
	        		empty = 0;
	        	}
	        	if(in[j][i]=='*' && empty>=k)
	        	{
	        		ans = ans + comb(empty,k);
	        		empty = 0;
	        	}
	        	if(empty>=k && j==n-1)
	        	{
	        		ans = ans + comb(empty,k);
	        		empty = 0;
	        	}
	        }
	    }
        cout << ans << "\n" ;
	}
}