#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    int n ;
    scanf("%d",&n);
    int x = 0;
    char in[1000];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",in);
        if(in[0]=='+' || in[1]=='+')
        {
            x++;
        }
        else if(in[0]=='-' || in[1]=='-')
        {
            x--;
        }
    }
    printf("%d",x);
}