#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int num;
    int in[101];
    scanf("%d",&n);
    for(int i = 0 ; i < 101 ; i++)
    {
        in[i]=0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num);
        in[num]++;
    }
    for(int i = 0 ; i < 101 ; i++)
    {
        for(int j = i+1 ; j < 101 ; j++)
        {
            if(in[i]==n/2 && in[j]==n/2)
            {
                printf("YES\n");
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("NO");
}