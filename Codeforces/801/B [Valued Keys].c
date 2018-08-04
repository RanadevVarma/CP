#include<stdio.h>
#include<string.h>
int main()
{
    char x[102] , z[102] , y[102];
    int temp = 0;
    scanf("%s %s",x,z);
    int l = strlen(x);
    for(int i = 0 ; i < l ; i++)
    {
        if(x[i]<z[i])
        {
            printf("-1");
            return 0;
        }
        else if(x[i]>=z[i])
        {
            y[temp] = z[i];
            temp++;
        }
    }
    for(int i = 0 ; i<temp ; i++)
    {
        printf("%c",y[i]);
    }
}