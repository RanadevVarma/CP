#include<stdio.h>
#include<string.h>
int main()
{ char p[101] ;
  char q[101] ;
  scanf("%s",p);
  scanf("%s",q);
  int l = strlen(p) ;
  for( int k = 0 ; k< l ; k++)
  { if ( (p[k]=='1' && q[k]=='0') || (p[k]=='0' && q[k]=='1'))
     { printf("1") ; }
   else
     { printf("0") ; }
  }
    
    
}