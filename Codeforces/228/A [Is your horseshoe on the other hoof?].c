#include<stdio.h>
#include<string.h>
int main()
{   int t = 0 ;
    int horse[4] ;
    for ( int i = 0 ; i<4 ; i++ )
    { scanf("%d",&horse[i]) ; }
    int a = horse[0];
    int b = horse[1];
    int c = horse[2];
    int d = horse[3];
    if ( a==b && b==c && c==d)
    printf("3");
    else if ( ((a==b) && (b==c)) || ((b==c) && (c==d)) || ((a==c) && (c==d)) || ((a==b) && (b==d)) )
    printf("2");
    else if ( ((a==b) && (c==d)) || ((a==c) && (b==d)) || ((a==d) && (b==c)) )
    printf("2");
    else if ( (a==b) || (b==c) || (c==d) || (a==c) || (b==d) || (a==d) )
    printf("1");
    else
    printf("0");
    


     

    
    

     
    
}