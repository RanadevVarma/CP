#include<stdio.h>
#include<string.h>
int main()
{
    char lucky[20] ;
    scanf("%s",lucky);
    int a = 0;
    int l = strlen(lucky) ;
    for( int i = 0 ; i<l ; i++)
    {
        if(lucky[i]== '4'|| lucky[i]== '7')
        {  
            a++ ;
        }
    }
    if( a == 4 || a== 7) 
        {
            printf("YES");
        }
    else
        {
            printf("NO");
        }
}