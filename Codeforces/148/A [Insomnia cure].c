#include<stdio.h>
int main()
{
int a,b,c,d,e ;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int i = 0 ;
for( int j = 1 ; j<=e ; j++)
  { if ( j%a==0 || j%b==0 || j%c==0 || j%d==0)
  {i++ ;}
  }
  printf("%d",i);
}