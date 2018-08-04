#include<stdio.h>
#include<string.h>
int main()
{
    char s[7];
    int rem = 0;
    int n,temp=-1;
    int in;
    int heap[300001];
    int ans = 0;
    scanf("%d",&n);
    for(int i = 0 ; i<(2*n) ; i++)
    {
        scanf("%s",s);
        if(s[0]=='a')
        {
            scanf("%d",&in);
            heap[++temp]=in;
        }
        else if(s[0]=='r')
        {
            rem++;
            if(temp!=-1)
            {
                if(heap[temp]==rem)
                {
                   temp--;
                }
                else
                {   
                   temp =-1;
                   ans++;
                }
            }
        }
    }
    printf("%d",ans);
}