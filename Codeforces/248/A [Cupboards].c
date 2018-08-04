#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    scanf("%d",&a);
    int b[a],c[a];
    int t = 0;
    int f = 0;
    for(int i=0;i<a;i++)
    {
        scanf("%d %d",&b[i],&c[i]);
    }
    int x=0,y=0,z=0,w=0;
    for(int i=0;i<a;i++)
    {
        if(b[i]==0)
        x++;
        if(b[i]==1)
        y++;
    }
    for(int i=0;i<a;i++)
    {
        if(c[i]==0)
        z++;
        if(c[i]==1)
        w++;
    }
    if(x>=y)
    t = a-x;
    else
    t = a-y;
    if(z>=w)
    f = a-z;
    else
    f = a-w;
    printf("%d",t+f);
}