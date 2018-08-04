#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    int n ;
    int m ;
    scanf("%d %d",&n,&m);
    int available = n ;
    int day = 0 ;
    while(available>0)
    {
        day++ ;
        available-- ;
        if(day%m==0)
        {
            available++;
        }
    }
    printf("%d",day);
}