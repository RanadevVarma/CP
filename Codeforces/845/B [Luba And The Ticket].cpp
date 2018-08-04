#include <iostream>  
#include <stdio.h>  
#include <stdlib.h>  
#include <algorithm>  
#include <string.h>  
#include <math.h>  
#include <vector>  
#include <set>  
#include <map>  
#include <queue>  
#include <stack>  
#define ll long long  
using namespace std;  
  
string str;  
vector<int> a;  
  
map<string,int> vis;  
  
struct point{  
    string a;  
    int step;  
    point(string aa,int b){  
        a=aa;  
        step=b;  
    }  
};  
  
int bfs(){  
    queue<point> que;  
    que.push(point(str,0));  
    vis[str]=1;  
    while(!que.empty()){  
        point tp=que.front();  
        que.pop();  
  
        int fs=tp.a[0]-'0'+tp.a[1]-'0'+tp.a[2]-'0';  
        int bs=tp.a[3]-'0'+tp.a[4]-'0'+tp.a[5]-'0';  
        if(fs==bs)  
            return tp.step;  
  
        for(int i=0;i<7;i++)
            for(int j=0;j<10;j++){ 
                string temp=tp.a;  
                temp[i]='0'+j;  
  
                if(vis[temp]==0)  
                    que.push(point(temp,tp.step+1));  
  
            }  
    }  
  
}  
  
  
int main(){  
    cin>>str;  
    cout<<bfs()<<endl;  
    return 0;  
}  