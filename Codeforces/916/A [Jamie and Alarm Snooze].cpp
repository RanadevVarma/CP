#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    int s ;
    scanf("%d",&s);
    int h , m ;
    scanf("%d %d",&h,&m);
    if(h%10==7 || h/10==7 || m/10==7 || m%10==7)
    {
        printf("0");
    }
    else
    {int ans = 1 ;
    int temp = 1 ;
    while(temp==1)
    {
        m = m-s ;
        if(m<0)
        {
            m = 60 + m ;
            h--;
        }
        if(h<0)
        {
            h = 23 ;
        }
        if(h%10==7 || h/10==7 || m/10==7 || m%10==7)
        {
            printf("%d",ans);
            return 0 ;
        }
        else
        {
            ans++;
        }
    }}
}