#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    double check;
    for(int y = 0 ; y<=n/b ; y++)
    {
        int nu = n-(y*b);
        int de = a;
        check = nu/(float)de ;
        if((check-(int)check)==0)
        {
            printf("YES\n");
            printf("%d %d",(n-y*b)/a,y);
            return 0;
        }
    }
    printf("NO");
}