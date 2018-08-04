#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    char in[101] ;
    scanf("%s",in);
    int l = strlen(in);
    int check = 1;
    for(int i = 0 ; i < l -1 ; i++)
    {
        if(in[i]==in[i+1])
        {
            check++;
        }
        else
        {
            check = 1 ;
        }
        if(check>=7)
        {
            printf("YES");
            return 0 ;
        }
    }
    printf("NO");
}