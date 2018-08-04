#include<stdio.h>
int main()
{
    int sum,a;
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a);
        sum = sum+a;
    }
    if(sum%5==0 && sum!=0)
    {
        printf("%d",sum/5);
    }
    else
    {
        printf("-1");
    }
}
