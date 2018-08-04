#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    long long int rem[n];
    long long int cap[n];
    long long int tr = 0 ;
    long long int lar = 0 ;
    long long int nxt = 0 ;
    int temp ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%lld",&rem[i]);
        tr =  tr + rem[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%lld",&cap[i]);
        if(cap[i]>=lar)
        {
            temp = i;
            lar = cap[i];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i!=temp)
        if(cap[i]>=nxt && nxt<=lar)
        {
            nxt = cap[i];
        }
    }
    if(tr<=lar+nxt)
    printf("YES");
    else
    printf("NO");
}