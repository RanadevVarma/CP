
 // Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <iterator>
#include <iomanip>
#include <deque>

using namespace std ;

vector<int> graphs[108];
int vis[108];

void dfs(int v)
{
	vis[v] = 1 ;
	for(int i = 0 ; i < graphs[v].size() ; i++)
	{
		if(vis[graphs[v][i]]==0)
		{
			dfs(graphs[v][i]);
		}
	}
}

int main()
{
    int n,temp;
    cin >> n ;
    temp = n ;
    int type,in1,in2 ;
    vector<pair<int,int>>ref ;
    while(temp--)
    {
    	cin >> type >> in1 >> in2 ;
    	if(type==1)
    	{
    		ref.push_back(make_pair(in1,in2));
    		for(int i = 0 ; i < ref.size()-1 ; i++)
    		{
                if((ref[i].first<in1 && in1<ref[i].second) || (ref[i].first<in2 && in2<ref[i].second))
                {
                	graphs[ref.size()-1].push_back(i);
                }
                if((in1<ref[i].first && ref[i].first<in2) || (in1<ref[i].second && ref[i].second<in2))
                {
                	graphs[i].push_back(ref.size()-1);
                }
    		}
    	}
    	else
    	{
            in1--;
            in2--;
            for(int i = 0 ; i < 108 ; i++)
            {
            	vis[i] = 0 ;
            }
            dfs(in1);
            if(vis[in2]==1)
            {
            	cout << "YES" << "\n";
            }
            else
            {
            	cout << "NO" << "\n";
            }    	
        }
    }
}