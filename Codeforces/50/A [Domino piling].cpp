#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    int n,m ;
    scanf("%d %d",&n,&m);
    if(n%2==0)
    {
        printf("%d",n*m/2);
    }
    else
    {
        printf("%d",((n-1)/2)*(m)+(m/2));
    }
}