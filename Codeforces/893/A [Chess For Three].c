#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int win[n];
    for(int i = 0 ;  i<n ; i++)
    {
        scanf("%d",&win[i]);
    }
    if(win[0]==3)
    {
        printf("NO");
        return 0;
    }
    int spec[n];
    spec[0]=3;
    for(int i = 1; i<n ; i++)
    {
        spec[i]=6-spec[i-1]-win[i-1];
    }
    for(int i = 1 ; i<n ; i++)
    {
        if(win[i]!=win[i-1] && win[i]!=spec[i-1])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}