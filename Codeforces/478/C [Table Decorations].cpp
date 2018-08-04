
#include<stdio.h>
#include<string.h>
#include<math.h>
void swap(long long int *xp, long long int *yp)
{
    long long int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//BTW l,r are indices
void bubblesort(long long arr[] , int l , int r)
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
    long long int in[3];
    scanf("%lld %lld %lld",&in[0],&in[1],&in[2]);
    bubblesort(in,0,2);
    long long ans = (in[0]+in[1]+in[2])/3 ;
    if(in[0]+in[1]<ans)
    {
        printf("%lld",in[0]+in[1]);
    }
    else
    {
        printf("%lld",ans);
    }
}








