#include<stdio.h>
int main()
{ int n , t ;
  scanf("%d%d", &n , &t ) ;
  char queue[n] ;
  scanf("%s", queue);
  for ( int i = 0 ; i<t ; i++)
    {for( int j = 0 ; j<n ; j++)
      if ( queue[j] == 'B' && queue[j+1] == 'G' )
      { queue[j] = 'G' ;
        queue[j+1] = 'B' ;
        j++ ;}}
    
    printf("%s",queue);
}
  