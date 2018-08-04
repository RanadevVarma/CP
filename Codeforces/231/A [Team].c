#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int t[n][3];
    int test = 0 ;
    for( int i = 0 ; i<n ; i++)
    {
        for( int j = 0 ; j<3 ; j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
    for( int k = 0 ; k<n ; k++)
    {
        if ( ( t[k][0]==1 && t[k][1]==1) || (t[k][1]==1 && t[k][2]==1) || (t[k][0]==1 && t[k][2]==1))
        {
            test++ ;
        }
        
    }
    printf("%d",test);
    

}