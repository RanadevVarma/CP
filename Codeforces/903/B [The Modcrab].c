#include<stdio.h>
int main()
{
    int p[10000];
    int i=0;
    int hv,av,pv;
    scanf("%d %d %d",&hv,&av,&pv);
    int he,ae;
    scanf("%d %d",&he,&ae);
    int temp=0,check=0;
    while(temp==0)
    {
        check++;
        if(av>=he)
        {
            p[i]=1;
            i++;
            temp = 1;
        }
        else if(hv<=ae)
        {
            p[i]=0;
            i++;
            hv = hv+pv;
        }
        else
        {
            p[i]=1;
            i++;
            he = he-av;
        }
        hv=hv-ae;
    }
    printf("%d\n",check);
    for(int j = 0 ; j<i; j++)
    {
        if(p[j]==0)
        {
            printf("HEAL\n");
        }
        else if(p[j]==1)
        {
            printf("STRIKE\n");
        }
    }
}