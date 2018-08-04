#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std ;
int main()
{
    int n ;
    scanf("%d",&n);
    int m ;
    scanf("%d",&m);
    int in[m];
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d",&in[i]);
    }
    sort(in,in+m);
    int ans ;
    int tans ;
    for(int i = 0 ; i <= m-n ; i++)
    {
        if(i==0)
        {
            ans = in[i+n-1]-in[i];
        }
        else
        {
            tans = in[i+n-1]-in[i];
            if(tans<ans)
            {
                ans = tans;
            }
        }
    }
    printf("%d",ans);
}