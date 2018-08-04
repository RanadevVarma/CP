#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    char in1[101] ;
    char in2[101] ;
    scanf("%s",in1);
    scanf("%s",in2);
    int l1 = strlen(in1);
    int l2 = strlen(in2);
    for(int i  = 0 ; i < l1 ; i++)
    {
        if(in1[i]>='A' && in1[i]<='Z')
        {
            in1[i] = in1[i] + 32 ;
        }
    }
    for(int i  = 0 ; i < l2 ; i++)
    {
        if(in2[i]>='A' && in2[i]<='Z')
        {
            in2[i] = in2[i] + 32 ;
        }
    }
    int comp = strcmp(in1,in2);
    if(comp<0)
    printf("-1");
    else if(comp>0)
    printf("1");
    else
    printf("0");
    return 0 ;
}