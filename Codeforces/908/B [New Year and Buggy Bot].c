
#include<stdio.h>
#include<string.h>
#include<math.h>
void swap(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//BTW l,r are indices
void bubblesort(double arr[] , int l , int r)
{
    int i,j,temp=0;
    for(int i = l ; i<=r ; i++)
    {
    	for(int j = l ; j<r-temp ; j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    			swap(&arr[j],&arr[j+1]);
    		}
    	}
    	temp++;
    }
}
int maxinarray(int arr[] , int l , int r)
{
	int ans = arr[0];
	for(int i = l ; i<r ; i++)
	{
        if(arr[i+1]>=arr[i])
        {
        	ans = arr[i+1];
        }
	}
	return ans;
}
int mininarray(int arr[] , int l , int r)
{
	int ans = arr[0];
	for(int i = l ; i<r ; i++)
	{
		if(arr[i+1]<=arr[i])
		{
			ans = arr[i+1];
		}
	}
	return ans;
}
int mod(int a , int b)
{
    if(a>=b)
    {
        return a-b;
    }
    else
    return b-a ;
}
int main()
{
	//The actual part is here!!
	int ans = 0;
    int r,c,g,h,ec;
    scanf("%d %d",&r,&c);
    char in[r][c];
    for(int i = 0 ; i < r ; i++)
    {
       scanf("%s",in[i]);
       for(int j = 0 ; j<c ; j++)
       {
           if(in[i][j]=='S')
           {
               g=i;
               h=j;
           }
       }
    }
    char s[101];
    scanf("%s",s);
    int l = strlen(s);
    for(int i = 0 ; i<4 ; i++ )
    {
        for(int j = 0 ; j<4 ; j++)
        {
            for(int k = 0 ;  k < 4 ; k++)
            {
                for(int m = 0 ; m<4 ; m++)
                {
                    if(i!=j && i!=k && i!=m && j!=k && j!=m && k!=m)
                    {
                        int a = g; int b = h ;
                        for(int z = 0 ; z<l ; z++)
                        {
                            if(s[z]-'0' == i)
                            {
                                a--;
                            }
                            if(s[z]-'0' == j )
                            {
                                a++;
                            }
                            if(s[z] -'0'== k)
                            {
                                b--;
                            }
                            if(s[z]-'0' == m )
                            {
                                b++;
                            }
                            if(in[a][b]=='#' || a<0 || b<0 || a>=r || b>=c)
                            {
                                break;
                            }
                            else if(in[a][b]=='E')
                            {
                                ans++;
                                break;
                            }
                           
                        }
                    }
                }
            }
        }
    } 
    printf("%d",ans);
}