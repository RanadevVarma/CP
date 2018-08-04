#include<stdio.h>
#include<math.h>
int main()
{
    int r , d ;
    scanf("%d%d",&r,&d);
    int n ;
    scanf("%d",&n);
    int a = 0 ;
    int p[n][3];
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		scanf("%d",&p[i][j]);
    	}
    }
    for ( int k = 0 ; k < n ; k++)
    {
       float dis = sqrt((p[k][0]*p[k][0])+(p[k][1]*p[k][1])) ;
       if( (r-d <= dis + p[k][2]) && ( dis + p[k][2] <= r) && (r-d <= dis - p[k][2]) && (dis - p[k][2] <= r))
       {
           a++ ;
       }
        
    }
    printf("%d",a);
    
    

}