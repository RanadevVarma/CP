#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    int n ;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        char in[101];
        scanf("%s",in);
        int l = strlen(in);
        if(l<=10)
        {
            printf("%s",in);
        }
        else
        {
            printf("%c%d%c",in[0],l-2,in[l-1]);
        }
        printf("\n");
    }
}