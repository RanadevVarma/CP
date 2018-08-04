#include<stdio.h>
#include<string.h>
struct Name
{
    char in[200];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Name Name[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",Name[i].in);
    }
    for(int i = 0 ; i<n ; i++)
    {
        int temp = 0;
        for(int j = 0 ; j<i ; j++)
        {
            if(strcmp(Name[i].in,Name[j].in) == 0)
            {
                printf("YES\n");
                temp = 1;
                break;
            }
        }
        if(temp==0)
        {
            printf("NO\n");
        }
    }
}