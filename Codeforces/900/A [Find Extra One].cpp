#include<stdio.h>
int main()
{
    int n;
    int l = 0,r = 0;
    scanf("%d",&n);
    int in[n][2];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d",&in[i][0],&in[i][1]);
    }
    for(int j = 0 ; j < n ; j++)
    {
        if(in[j][0]>0)
        {
            r++;
        }
        else
        {
            l++;
        }
    }
    if(l==1 || r==1 ||l==0 || r==0)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
}