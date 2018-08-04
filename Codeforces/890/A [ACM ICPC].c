#include<stdio.h>
int main()
{
    int in[7];
    int pos;
    int temp = 0 , sum= 0;
    for(int i = 1 ; i<7 ; i++)
    {
        scanf("%d",&in[i]);
        sum = sum + in[i];
    }
    for(int i = 1 ; i<=4  ;i++)
    {
        for(int j = i+1 ; j<=5 ; j++)
        {
            for(int k = j+1 ; k<=6 ; k++)
            {
                pos = in[i]+in[j]+in[k];
                if(sum == 2*pos)
                {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
}
   