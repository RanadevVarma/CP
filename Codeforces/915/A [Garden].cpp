#include<iostream>
#include<algorithm>
#include<cmath>
int main()
{
    int n,k ;
    scanf("%d %d",&n,&k);
    int in[n];
    for(int i = 1 ; i <= n ; i++ )
    {
        scanf("%d",&in[i]);
    }
    int min = 0;
    for(int j = 1 ; j <= n ; j++)
    {
        if(k%in[j]==0)
        {
            if(min==0)
            {
                min = k/in[j];
            }
            else
            {
                if(min>(k/in[j]))
                {
                    min = k/in[j] ;
                }
            }
        }
    }
    printf("%d",min);
}