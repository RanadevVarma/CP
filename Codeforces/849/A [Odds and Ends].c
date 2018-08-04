#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main( void)
{
    int n ;
    scanf("%d",&n);
    int o[n];
    int test = 0 ;
    for( int i = 0 ; i < n ; i++)
    {
        scanf("%d",&o[i]);
    }
    if( n%2==1 && o[0]%2==1 && o[n-1]%2==1 )
    { printf("YES");
      return 0 ; }
    else
    { printf("NO") ;
      return 0 ; }

    
    
}