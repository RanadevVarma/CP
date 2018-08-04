#include<iostream>
using namespace std ;
int main()
{
    int n ;
    scanf("%d",&n);
    if(n==2)
    {
        printf("NO");
        return 0;
    }
    else if(n%2==0)
    {
        printf("YES");
        return 0;
    }
    else
    {
        printf("NO");
        return 0;
    }
}