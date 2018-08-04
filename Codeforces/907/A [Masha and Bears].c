#include<stdio.h>
int main()
{
    int fa , mo , so ,ma;
    scanf("%d %d %d %d",&fa,&mo,&so,&ma);
    if(ma>2*so || 2*ma<so|| ma>=mo)
    {
        printf("-1");
        return 0;
    }
    if(so>ma)
    printf("%d\n%d\n%d",2*fa,2*mo,so);
    else
    printf("%d\n%d\n%d",2*fa,2*mo,ma);
    return 0;
}