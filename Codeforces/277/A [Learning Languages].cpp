#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

vector <int> graph[300] ;
int visited[300];
int ans ;

void dfs(int i)
{
	visited[i] = 1 ;
	for(int j = 0 ; j < graph[i].size() ; j++)
	{
		if(visited[graph[i][j]]==0)
		{
			dfs(graph[i][j]);
		}
	}
}

int main()
{
	int n,m ;
	cin >> n >> m ;
	int num ;
	int noob = 0;
	int lang ;
	for(int i = 1  ; i <= n ; i++)
	{
        cin >> num ;
        if(num==0)
        {
            noob++ ;
        }
        for(int j = 1 ; j <= num ; j++)
        {
            cin >> lang ;
            graph[i].push_back(lang+n);
            graph[lang+n].push_back(i);
        }
	}
	for(int i = 1 ; i <= n ; i++)
	{
        if(visited[i]==0)
        {
            ans++;
            dfs(i);
        }
	}
	if(noob==n)
	{
		cout << noob << "\n";
	}
	else
	{
		cout << ans-1 << "\n";
	}
}