#include<stdio.h>
int main ()
{
    int n ;
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d" , &n) ;
    int force[n][3] ;
    for ( int i = 0 ; i < n ; i++)
     { 
       for ( int j = 0 ; j < 3 ; j++)
       { scanf("%d", &force[i][j]) ;
         }}
       
       for( int a = 0 ; a<n ; a++)
       { x = x + force[a][0] ; }
       for( int b = 0 ; b<n ; b++)
       { y = y + force[b][1] ; }
       for( int c = 0 ; c<n ; c++)
       { z = z + force[c][2] ; }
       if ( x == 0 && y == 0 && z== 0)
          { printf( "YES" ) ; }
        else
        { printf ("NO") ; }
}
       