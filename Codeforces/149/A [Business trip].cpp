#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    int n ;
    scanf("%d",&n);
    int in[12];
    for(int i = 0 ; i < 12 ; i++)
    {
        scanf("%d",&in[i]);
    }
    sort(in,in+12,greater<int>());
    int temp = 0 ; 
    int curlen = 0 ;
    while(temp<=12)
    {
        if(curlen>=n)
        {
            printf("%d",temp);
            return 0 ;
        }
        if(temp<12)
        {curlen = curlen + in[temp];}
        temp++;
    }
    printf("-1");
}