#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n , m ;
    scanf("%d",&n);
    scanf("%d",&m);
    int exp = 0 ;
    while(pow(2,exp)<=m)
    {
        exp++;
    }
    exp--;
    int t = m - pow(2,exp);
    int b = pow(2,n);
    if(exp<n)
    {
        printf("%d",m);
    }
    else if(exp==n)
    {
        printf("%d",t);
    }
    else if(exp>n)
    {
        printf("%d",t%b);
    }
}