#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std ;

vector <int> adj[300000];
int temp ;
void dfs(int curr_v,int des)
{
	for(int i = 0 ; i < adj[curr_v].size() ; i++)
	{
		if(adj[curr_v][i] == des)
		{
		    printf("YES");
		    temp = 1 ;
		    break;
		}
		else
        {
            dfs(adj[curr_v][i],des);
        }
	}
}
int main()
{
	int n , des ;
	cin >> n >> des ;
	for(int i = 1 ; i < n ; i++)
	{
		int v1 ;
		cin >> v1;
		adj[i].push_back(i+v1);
	
	}
    dfs(1,des);
    if(temp!=1)
    {
        printf("NO");
    }
}