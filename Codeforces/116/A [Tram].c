#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int max(int num1, int num2);
int main()
{
    int n ;
    scanf("%d",&n) ;
    int count = 0 ;
    int maxi = 0 ;
    int passanger[n][2];
    for( int i = 0 ; i<n ; i++)
    {
        for ( int j = 0 ; j<2 ; j++)
        {
            scanf("%d",&passanger[i][j]);
        }
    }
    for ( int k = 0 ; k<n ; k++)
    {
        count = count + (passanger[k][1] - passanger[k][0]);
        maxi = max(maxi,count);
    }
    printf("%d",maxi);
    return 0 ;
}
int max(int num1, int num2) {
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

