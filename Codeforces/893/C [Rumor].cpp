#include<bits/stdc++.h>

using namespace std;

bool vis[100010];
int gold[100010];
vector<int> adj[100010];
int cnt=0;

void dfs(int i){
	cnt=min(cnt,gold[i]);
	vis[i]=true;
	for(int x : adj[i])
		if(!vis[x])
			dfs(x);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i)    
        cin>>gold[i];
 	for(int i=0;i<m;++i){
 		int f1,f2;
 		cin>>f1>>f2;
 		--f1;--f2;
 		adj[f1].push_back(f2);
 		adj[f2].push_back(f1);
 	}   
 	long long ans=0LL;
 	for(int i=0;i<n;++i)
 		if(!vis[i]){
 			cnt=gold[i];
 			dfs(i);
 			ans+=(long long)cnt;
 		}
 	cout<<ans<<endl;
}