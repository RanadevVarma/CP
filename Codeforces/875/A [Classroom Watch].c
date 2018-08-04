#include<stdio.h>
int main()
{
    int n,a[1000];
    int temp = 0;
    scanf("%d",&n);
    int l;
    if(n>81)
    {
        l = n-81;
    }
    else
    {
        l = 0;
    }
    int u = n;
    for(int i = l ; i<=u ; i++)
    {
        int sum = 0;
        int j = i;
        while(j!=0)
        {
            sum = sum + j%10 ;
            j = j/10;
        }
        if((sum+i)==n)
        {
            a[temp]=i;
            temp++;
        }
    }
    printf("%d\n",temp);
    for(int k = 0 ; k<temp ; k++)
    {
        printf("%d\n",a[k]);
    }
}