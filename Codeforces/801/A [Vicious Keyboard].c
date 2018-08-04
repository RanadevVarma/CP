#include<stdio.h>
#include<string.h>
int main()
{
    char in[102];
    scanf("%s",in);
    int ans = 0,temp = 0;
    int l = strlen(in);
    for(int i = 0 ; i < l-1 ; i++)
    {
        if(in[i]=='V' && in[i+1]=='K')
        {
            ans++;
        }
        else if((in[i]=='V' && in[i+1]=='V' && in[i+2]!='K') || in[i]=='K' && in[i+1]=='K' && in[i-1]!='V')
        {
            temp = 1;
        }
    }
    if(temp==1)
    {
        ans++;
    }
    printf("%d",ans);
}