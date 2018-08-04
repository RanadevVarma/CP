#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ans = 0;
    int in[n+1];
    for(int i = 1 ; i<=n ; i++)
    {
        scanf("%d",&in[i]);
    }
    for(int j = 1 ; j<=n ; j++)
    {
        if(in[j]>0 && in[j]>=in[k])
        {
            ans++;
        }
    }
    printf("%d",ans);
}