#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int o = 0; int t = 0;
    int d;
    int ans = 0;
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&d);
        if(d==1)
        {
            o++;
        }
        if(d==2)
        {
            t++;
        }
    }
    if(o==t)
    {
        ans = ans+o;
        printf("%d",ans);
        return 0;
    }
    else if(t>o)
    {
        ans = ans+o;
        printf("%d",ans);
        return 0;
    }
    else
    {
        ans = ans + t ;
        o = o-t ;
        ans = ans + (o/3) ;
        printf("%d",ans);
    }
}
