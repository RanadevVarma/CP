#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    char in[101];
    scanf("%s",in);
    int res[101];
    int l = strlen(in);
    int temp = -1 ;
    for(int i = 0 ; i < l ; i++)
    {
        if(i%2==0)
        {
            temp++;
            res[temp] = in[i]-'0' ;
        }
    }
    sort(res,res+temp+1) ;
    for(int i = 0 ; i <= temp ; i++)
    {
        if(i==temp)
        {
            printf("%d",res[i]);
        }
        else
        {
            printf("%d+",res[i]);
        }
    }
}