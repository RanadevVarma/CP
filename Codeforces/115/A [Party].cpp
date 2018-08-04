#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std ;

vector <int> adj[2010];
vector <int> boss ;
int level[2010];
void dfs(int curr_v)
{
	for(int i = 0 ; i < adj[curr_v].size() ; i++)
	{
		level[adj[curr_v][i]] = level[curr_v] + 1 ;
        dfs(adj[curr_v][i]);
	}
}
int main()
{
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
		int v1 ;
		cin >> v1;
		if(v1!=-1)
			adj[v1].push_back(i);
		else
		{	
			boss.push_back(i);
			level[i] = 1 ;
		}
	}
	for(int i = 0 ; i < boss.size() ; i++)
	{
		dfs(boss[i]);
	}
	cout << *max_element(level+1,level+n+1) << "\n" ; 
}
