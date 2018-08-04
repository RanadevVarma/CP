#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int done[101];
int x[101],y[101];

int ans = -1 ;

void dfs(int v , int n)
{ 
	done[v] = 1 ;
	for(int j = 0 ; j < n ; j++)
	{
        if((x[v]==x[j] || y[v]==y[j]) && (done[j]==0))
        {
        	dfs(j,n);
        }
	}
}

int main()
{
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> x[i] >> y[i] ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		if(done[i]==0)
		{
			dfs(i,n);
			ans++;
		}
	}
	cout << ans << "\n";
}