#include <iostream>
#include <vector>

using namespace std ;

int ans,m,vo ;

vector <int> adj[100009];
int vis[100009];
int cat[100009];

void dfs(int v , int s)
{
    int temp = 1 ;
    vis[v]++;
    if(cat[v]==1)
    {
        s++;
        if(s>m)
        {
            return ;
        }
    }
    else
    {
        s = 0 ;
    }
    for(int i = 0 ; i < adj[v].size() ; i++)
    {
        vo = adj[v][i];
        if(vis[vo]==0)
        {
            dfs(vo,s);
            temp = 0;
        }
    }
    if(temp==1)
    {
        ans++;
    }
}

using namespace std ;

int main()
{
    int n ;
    cin >> n >> m ;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> cat[i];
    }
    for(int j = 1 ; j<=n-1 ; j++)
    {
        int temp,demp ;
        cin >> temp >> demp ;
        adj[temp].push_back(demp);
        adj[demp].push_back(temp);
    }
    dfs(1,0);
    cout << ans << "\n" ;
}