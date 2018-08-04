#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    int n ;
    scanf("%d",&n);
    int x,y ;
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d",&x,&y);
        if(y-x>=2)
        {
            ans++;
        }
    }
    printf("%d",ans);
}