#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    char in[2];
    char inp[2];
    char temp ;
    scanf("%c%c%c%c%c",&in[0],&in[1],&temp,&inp[0],&inp[1]);
    int h[2] ;
    int m[2] ;
    h[0] = in[0] - '0' ;
    h[1] = in[1] - '0' ;
    m[0] = inp[0] - '0' ;
    m[1] = inp[1] - '0' ;
    if(h[0]==m[1] && h[1]==m[0])
    {
        printf("0");
        return 0;
    }
    for(int t = 1 ; t <= 3600 ; t++)
    {
        m[1] = m[1] + 1 ;
        if(m[1]==10)
        {
            m[0]++;
            m[1] = 0;
        }
        if(m[0]==6)
        {
            m[0] = 0 ;
            h[1]++;
        }
        if(h[1]==10)
        {
            h[0]++;
            h[1] = 0;
        }
        if(h[0] == 2 && h[1]==4)
        {
            h[0] = 0 ;
            h[1] = 0 ;
        }
        if(h[0]==m[1] && h[1]==m[0])
        {
            printf("%d",t);
            return 0 ;
        }
    }
}