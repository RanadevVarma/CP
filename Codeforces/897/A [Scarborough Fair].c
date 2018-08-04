#include<stdio.h>
#include<string.h>
int main()
{
    int n , m ;
    scanf("%d %d",&n,&m);
    char in[n];
    scanf("%s",in);
    for(int i = 1 ; i<=m ; i++)
    {
        int l,r;
        char c1,c2;
        scanf("%d %d %c %c",&l,&r,&c1,&c2);
        for(int j=l-1 ;j<r;j++)
        {
           if(in[j]==c1)
           {
              in[j]=c2;
           }
        }
    }
    printf("%s",in);
}