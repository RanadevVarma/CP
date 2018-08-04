#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[100];
    gets(c);
    int x=0,y=0;
    int a = strlen(c);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(c[i]==c[j])
            x++;
        }
        if(x!=1)
        {
        c[i]='0';
        }
        x=0;
    }
    for(int k=0;k<a;k++)
    {
        if(c[k]!='0')
        y++;
    }
    if(y%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
}