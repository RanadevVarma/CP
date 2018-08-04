#include<stdio.h>
#include<string.h>
int main()
{   
    int n,j;
    char crypt[200] ;
    gets(crypt);
    n=strlen(crypt);
    for(j = 0 ; j<n ; j++)
    {
      if (crypt[j]== '.')
        { printf("0"); }
      else if ( crypt[j]== '-' && crypt[j+1]== '.' &&j!=n-1)
        { printf("1");j++ ;}
      else if ( crypt[j]== '-' && crypt[j+1]== '-'&&j!=n-1 )
        { printf("2"); j++;}
        
    }
    return 0;
}