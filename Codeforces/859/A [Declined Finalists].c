#include<stdio.h>
int max( int a , int b)
{
    if (a>b)
    return a ;
    else 
    return b ;
}
int main()
{
   int k ;
   int temp = 0 ;
   scanf("%d",&k);
   int r[k] ;
   for( int i = 0 ; i<k ; i++)
   {
       scanf("%d",&r[i]);
       temp = max( temp , r[i]);
   }
   if( temp<=25)
   {
       printf("0");
       return 0 ;
   }
   else
   printf("%d",temp - 25);
   return 0 ;
}